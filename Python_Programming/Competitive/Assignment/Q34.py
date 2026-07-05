# A lambda function which accept one number and returns True if number is odd otherwise false.

ChkOdd = lambda No: True if(No % 2 != 0) else False

def main():
    Value = int(input("Enter number:"))

    Ret = ChkOdd(Value)

    if(Ret == True):
        print("Number is Odd")

    else:
        print("Number is not Odd")

if __name__ == "__main__":
    main()