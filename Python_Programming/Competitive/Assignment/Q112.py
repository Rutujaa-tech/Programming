import os

def CheckFile(filename):
    try:
        ret = os.path.exists(filename)

        if(ret == True):
            return True
        else:
            return False
        
    except FileNotFoundError:
        print("File not found")

def main():

    FileName = input("Enter the file name:")

    Result = CheckFile(FileName)

    if (Result == True):
        print("File is present in current directory")

    else:
        print("There is no such file")

if __name__ =="__main__":
    main()

