# program which accept one number and check whether it is prime or not.

def main():

    No = int(input("Enter number is:"))

    
    for i in range(2 , No):
        if(No % i == 0):
            print("number is not prime")
            break

    else:
        print("number is prime")


if __name__ == "__main__":
    main()