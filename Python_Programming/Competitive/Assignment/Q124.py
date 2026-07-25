import os
import shutil
import schedule
import time
from datetime import datetime

# Backup Function
def BackupFile(source, destination):

    try:
        # Get file name and extension
        filename = os.path.basename(source)
        name, ext = os.path.splitext(filename)

        # Current Date and Time
        timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")

        # New Backup File Name
        backup_filename = f"{name}_{timestamp}{ext}"

        # Destination Path
        backup_path = os.path.join(destination, backup_filename)

        # Copy File
        shutil.copy2(source, backup_path)

        # Log File
        with open("backup_log.txt", "a") as log:
            log.write(f"\nBackup Time : {datetime.now()}")
            log.write(f"\nSource      : {source}")
            log.write(f"\nDestination : {backup_path}")
            log.write(f"\nStatus      : Success\n")
            log.write("-" * 50 + "\n")

        print("Backup Created Successfully")

    except Exception as e:
        print("Error :", e)

        with open("backup_log.txt", "a") as log:
            log.write(f"\nBackup Time : {datetime.now()}")
            log.write(f"\nStatus      : Failed")
            log.write(f"\nError       : {e}\n")
            log.write("-" * 50 + "\n")


def main():

    print("----- File Backup Automation -----")

    source = input("Enter Source File Path : ")
    destination = input("Enter Destination Folder Path : ")

    # Every 1 Hour
    schedule.every(1).hours.do(BackupFile, source, destination)

    # First Backup Immediately (Optional)
    BackupFile(source, destination)

    print("Backup Scheduler Started...")

    while True:
        schedule.run_pending()
        time.sleep(1)


if __name__ == "__main__":
    main()


