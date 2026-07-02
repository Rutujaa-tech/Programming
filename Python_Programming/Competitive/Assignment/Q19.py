# program which accepts one characterr and checks whether it is vowel or constant.

def main():

    ch = input("Enter Character is:")

    if(ch =='a' or ch =='e' or ch =='i' or ch =='o' or ch =='u' or ch =='A' or ch =='E' or ch =='I' or ch =='O' or ch =='U' ):
        print("character is vowel")

    else:
        print("character is constant")
    

if __name__ == "__main__":
    main()