# A program which accept N numbers fom user and store it into List.Accept one anotherr number from userr and return frequency of that number from list.

def Frequency(Brr, No):
    Count = 0

    for i in Brr:
        if (i == No):
            Count = Count + 1

    return Count


def main():
    Size = int(input("Enter number of elements: "))

    Arr = []

    print("Enter the elements:")

    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    Search = int(input("Enter number to find frequency: "))

    Ans = Frequency(Arr, Search)

    print("Frequency of", Search, "is:", Ans)


if __name__ == "__main__":
    main()