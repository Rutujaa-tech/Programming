def Frequency(FileName, Word):
    try:
        fobj = open(FileName, "r")

        Data = fobj.read()

        Count = Data.count(Word)

        print("Frequency of", Word, "is:", Count)

        fobj.close()

    except FileNotFoundError:
        print("File not found")


def main():
    FileName = input("Enter file name: ")
    Word = input("Enter word to search: ")

    Frequency(FileName, Word)


if __name__ == "__main__":
    main()