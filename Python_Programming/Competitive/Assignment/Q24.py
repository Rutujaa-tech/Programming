# program which accepts length and width of rectangle and print area.

def main():

    Length = float(input("Enter the Length:"))
    width = float(input("Enter the width:"))

    Area = Length * width

    print("Area of rectangle is:", Area)


if __name__ == "__main__":
    main()