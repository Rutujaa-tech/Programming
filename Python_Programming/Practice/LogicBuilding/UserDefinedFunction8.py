def BigBazar():
    print("Inside BigBazar")

    def Amul():
        print("Inside Amul Icecream parlor")
                   
def main():
    BigBazar()          #Allowed
    Amul()              #Error
    BigBazar.Amul()     #Error because bigBazar is naked function mhanun pn oop madhe he chalt

    
if __name__ == "__main__":
    main()