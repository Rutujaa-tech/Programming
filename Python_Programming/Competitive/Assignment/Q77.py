# A program which contains one lambda function which acccepts two parameters and return its multiplication.

def main():

    Multiply = lambda No1, No2: No1 * No2

    Value1 = int(input("Enter first number: "))
    Value2 = int(input("Enter second number: "))

    Ans = Multiply(Value1, Value2)

    print("Multiplication is:", Ans)


if __name__ == "__main__":
    main()