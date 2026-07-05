# A lambda function which accept one number and return True if Divisible by 5.

ChkDiv5 = lambda No : No % 5 == 0

def main():
    Value = int(input("Enter number:"))

    Ret = ChkDiv5(Value)

    if(Ret == True):
        print("It is Divisible by 5")

    else:
        print("It is Not Divisible by 5")

if __name__ == "__main__":
    main()