# A program which accept N numbers from user and store it into list. Return addition of all elements from that list.

def Addition(Brr):
    Sum = 0

    for i in Brr:
        Sum = Sum + i

    return Sum

def main():
    Size = int(input("Enter number of elements: "))

    Arr = []

    print("Enter the elements:")
    for i in range(Size):
        No = int(input())
        Arr.append(No)

    Ans = Addition(Arr)

    print("Addition of all elements is:", Ans)

if __name__ == "__main__":
    main()