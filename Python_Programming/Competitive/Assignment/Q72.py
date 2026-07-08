# A program which accept N numbers from user and store it into List. Return Maximum number from that List.

def Maximum(Brr):
    Max = Brr[0]

    for i in Brr:
        if (i > Max):
            Max = i

    return Max


def main():
    Size = int(input("Enter number of elements: "))

    Arr = []

    print("Enter the elements:")

    for i in range(Size):
        No = int(input())
        Arr.append(No)

    Ans = Maximum(Arr)

    print("Maximum number is:", Ans)


if __name__ == "__main__":
    main()