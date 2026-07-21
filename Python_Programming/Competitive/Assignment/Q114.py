import sys

def CopyFile(SourseFile,DestinationFile):
    
    try:
        fobj1 = open(SourseFile,"r")

        Data = fobj1.read()

        fobj2 = open(DestinationFile,"w")
        fobj2.write(Data)

        fobj1.close()
        fobj2.close()
        
    except FileNotFoundError:
        print("File not found")



def main():
    CopyFile(sys.argv[1],sys.argv[2])

if __name__=="__main__":
    main()