# program which contains one function named as Add() which accept two numbers from user and return addition of that two numbers.

def Add(No1,No2):
    Ans = No1 + No2
    return Ans
    

def main():
    Value1 = int(input("Enter first Number:"))
    Value2 = int(input("Enter second Number:"))

    Ret = Add(Value1,Value2)

    print("Addition is :",Ret)


if __name__ == "__main__":
    main()