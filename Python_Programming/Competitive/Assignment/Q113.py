def Display(FileName):
    try:
        fobj = open(FileName,"r")

        Data = fobj.read()

        print(Data)

        fobj.close()

    except FileNotFoundError:
        print("File not found")

def main():
    filename = input("Enter file name:")

    Display(filename)

if __name__ == "__main__":
    main()