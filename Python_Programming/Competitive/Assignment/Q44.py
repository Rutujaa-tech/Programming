# a lambda function using function filter() which accepts a list of strings and returns a list of strings having length greaterr than 5.

CheckLength = lambda Str: len(Str) > 5

def main():
    Size = int(input("Enter number of strings : "))

    Data = []

    print("Enter the strings :")
    for i in range(Size):
        Str = input()
        Data.append(Str)

    print("Input data is :", Data)

    FData = list(filter(CheckLength, Data))

    print("Strings having length greater than 5 are :", FData)

if __name__ == "__main__":
    main()