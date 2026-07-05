# A lambda function using map() which accepts a list of numbers and returns a list of squares of each number.

Square = lambda No: No * No

def main():

    Size = int(input("Enter number of elements:"))

    Data = []
    
    for i in range(Size):
        No = int(input("Enter number: "))
        Data.append(No)

        MData = list(map(Square,Data))

    print("input list :",Data)
    print("Square List :",MData)

if __name__ == "__main__":
    main()