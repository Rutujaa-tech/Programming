# # A program which accept N numbers from user and store it into List. Return Minimum number from that List.

def Minimum(Brr):
    Min = Brr[0]

    for i in Brr:
        if (i < Min):
            Min = i

    return Min


def main():
    Size = int(input("Enter number of elements: "))

    Arr = []

    print("Enter the elements:")

    for i in range(Size):
        No = int(input())
        Arr.append(No)

    Ans = Minimum(Arr)

    print("minimum number is:", Ans)


if __name__ == "__main__":
    main()