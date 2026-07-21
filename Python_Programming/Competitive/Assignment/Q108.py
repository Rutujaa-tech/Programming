def TotalWords(filename):
    try:
        fobj = open(filename,"r")

        data = fobj.read()
        TotalWords = len(data.split())
        
        print("Total word :",TotalWords)

        fobj.close()
        
    except FileNotFoundError:
        print("File not found")



def main():
    FileName = input("Enter the file name:")
    TotalWords(FileName)

   
        
if __name__ == "__main__":
    main()


    