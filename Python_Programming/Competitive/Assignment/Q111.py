def CopyFile(Sourcefile,Destinationfile):
    try:
        fobj1 = open(Sourcefile,"r")

        Data = fobj1.read()

        fobj2 = open(Destinationfile,"w")
        fobj2.write(Data)

        fobj1.close()
        fobj2.close()

    except FileNotFoundError:
        print("File not found")

def main():
    firstfile = input("Enter existing file name:")
    secondfile = input("Enter newfile name:")

    CopyFile(firstfile,secondfile)    

if __name__ == "__main__":
    main()