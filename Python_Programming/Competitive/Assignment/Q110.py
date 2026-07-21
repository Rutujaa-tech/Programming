def Display(filename):
        
    try:
        fobj = open(filename,"r")

        Data = fobj.readlines()

        for line in Data:
            print(line)

        fobj.close()

    except FileNotFoundError:
        print("File not found")

def main():
    FileName = input("Enter File name")

    Display(FileName)

if __name__ == "__main__":
    main()