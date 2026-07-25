import os
import schedule
import datetime
import time

def DirectoryScanner(path):
    folder_Count = 0
    file_count = 0
            

    for FolderName,SubFolder,FileName in os. walk(path):
        folder_Count += len(SubFolder)
        file_count += len(FileName)

    print("------------------------------")
    print("Directory Scanned :",path)
    print("Total Subdirectories:", folder_Count)
    print("Total Files :",file_count)
    print("Scan Time:",datetime.datetime.now())
    print("------------------------------")


def main():
    directory = "Marvellous"

    DirectoryScanner(directory)

    schedule.every(1).minutes.do(DirectoryScanner,directory)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__=="__main__":
    main()

