#program which accept one number and check whether it is divisible by 3 and 5

def main():

    No = int(input("Enter a number: "))

    if(No % 3 == 0)and(No % 5 ==0):
        print("Divisible by 3 and 5")

    else:
        print("not Divisible by 3 and 5")

if __name__ == "__main__":
    main()