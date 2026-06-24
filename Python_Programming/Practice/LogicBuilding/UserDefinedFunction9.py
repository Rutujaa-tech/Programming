def BigBazar():
    print("Inside BigBazar")

    def Amul():                 #Inner function
        print("Inside Amul Icecream parlor")

    Amul()
    Amul()
                   
def main():
    BigBazar()        
         

    
if __name__ == "__main__":
    main()