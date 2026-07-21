def Search(filename,wordsearch):
        
    try:
        fobj = open(filename, "r")
        
        data = fobj.read()
        
        if wordsearch in data:
            print("Word is found in the file")
        else:
            print("Word is NOT found in the file")
            
        fobj.close()

    except FileNotFoundError:
        print("File not found")



def main():

    filename = input("Enter the file name: ")
    Wordsearch = input("Enter the word to search: ")

    Search(filename,Wordsearch)
    
    
if __name__ == "__main__":
    main()