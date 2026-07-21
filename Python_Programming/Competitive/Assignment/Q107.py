def CountLines(filename):
    try:
        fobj = open(filename,"r")

        TotalLines = len(fobj.readlines())
        
        print("Total lines :",TotalLines)

        fobj.close()
        
    except FileNotFoundError:
        print("File not found")

def main():
    FileName = input("Enter the file name:")

    CountLines(FileName)

if __name__ == "__main__":
    main()


    