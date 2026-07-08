# create on module named as Arithmatic which contains 4 function as Add(),Sub(),Mult(),Div().All functions accept two parameter as number and perform the operation.

from  Arithmatic59 import *

def main():
    Value1 = int(input("Enter first Number:"))
    Value2 = int(input("Enter first Number:"))

    Ret1 = Addition(Value1,Value2)
    Ret2 = Substraction(Value1,Value2)
    Ret3 = Multiplication(Value1,Value2)
    Ret4 = Division(Value1,Value2)

    print("Addition is:",Ret1)
    print("Substraction is:",Ret2)
    print("Multiplication is:",Ret3)
    print("Division is:",Ret4)

if __name__ == "__main__":
    main()