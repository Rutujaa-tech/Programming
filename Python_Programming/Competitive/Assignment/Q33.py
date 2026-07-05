# A lamnda function which accepts one number and returns True if number is even otherwise false.

ChkEven = lambda No : True if(No % 2 == 0) else False

def main():
    Value = int(input("Enter number:"))

    Ret = ChkEven(Value)

    if(Ret == True):
        print("Number is even")

    else:
        print("Number is not even")

if __name__ == "__main__":
    main()