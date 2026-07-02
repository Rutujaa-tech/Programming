# program which accept two numbers and prints addition,substraction,multiplication and division

def Addition(No1,No2):
    Ans = No1 + No2
    return Ans

def Substraction(No1,No2):
    Ans = No1 - No2
    return Ans

def Multiplication(No1,No2):
    Ans = No1 * No2
    return Ans

def Division(No1,No2):
    Ans = No1 // No2
    return Ans



def main():

    print("Enter first number:")
    Value1 = int(input())

    print("Enter second number:")
    Value2 = int(input())

    Ret1 = Addition(Value1,Value2)
    Ret2 = Substraction(Value1,Value2)
    Ret3 = Multiplication(Value1,Value2)
    Ret4 = Division(Value1,Value2)

    print("Addition is :",Ret1)
    print("Substraction is :",Ret2)
    print("Multiplication is :",Ret3)
    print("Division is :",Ret4)

if __name__ == "__main__":
    main()