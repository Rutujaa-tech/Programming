import os
import time
from datetime import datetime

def FileSize(filepath):
    log_file = "FileSizeLog.txt"

    try:
        size = os.path.getsize(filepath)
        now = datetime.now()

        with open(log_file, "a") as file:
            file.write(f"File Path : {filepath}\n")
            file.write(f"File Size : {size} bytes\n")
            file.write(f"Date & Time : {now.strftime('%Y-%m-%d %H:%M:%S')}\n")
            file.write("-" * 40 + "\n")

        print("File information logged successfully.")

    except FileNotFoundError:
        print("Error: File does not exist.")

def main():
    filepath = input("Enter file path: ")

    while True:
        FileSize(filepath)
        time.sleep(30)

if __name__ == "__main__":
    main()