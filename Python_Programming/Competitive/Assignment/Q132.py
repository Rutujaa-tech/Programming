import os
import time
import schedule
import shutil
from datetime import datetime

def CopyTextFile(Source,Destination):
    LogFile = "CopyLog.txt"

    if not os.path.isdir(Source):
        print("Error: Source directory does not exist.")
        return
    
    if not os.path.isdir(Destination):
        print("Error : Destination directory does not exit.")
        return
        
    for filename in os.listdir(Source):

        if filename.endswith(".txt"):
            SourcePath = os.path.join(Source,filename)
            DestinationPath = os.path.join(Destination,filename)

            try:
                shutil.copy(SourcePath,DestinationPath)

                now = datetime.now()

                with open(LogFile,"a")as file:
                    file.write(f"FileName:{filename}\n")
                    file.write(f"Source :{SourcePath}\n")
                    file.write(f"Destination :{DestinationPath}\n")
                    file.write(f"Date & time:{now.strftime('%Y-%m-%d %H:%M:%S')}\n")
                    file.write("-"*40+"\n")

            except Exception as e:
                print(f"cannot copy {filename}:{e}")

def main():
    source = input("Enter the source path:")
    destination = input("Enter the destination path:")


    CopyTextFile(source,destination)

    schedule.every(1).minutes.do(CopyTextFile,source,destination)

    while(True):
        schedule.run_pending()
        time.sleep(10)

if __name__=="__main__":
    main()

