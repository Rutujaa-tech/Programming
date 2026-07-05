# A lambda function which accepts one number and return cube of that number.

Cube = lambda No :(No * No * No)

def main():

    Value = int(input("Enter number:"))

    Ret = Cube(Value)

    print("Cube is",Ret)


if __name__ == "__main__":
    main()