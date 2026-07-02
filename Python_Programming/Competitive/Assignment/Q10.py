#program which accept one number and print sum of first N natural numbers.

def main():

    No = int(input("Enter number is:"))
    Sum = 0

    for i in range(1,No + 1):
        Sum = Sum + i
        
    print("sum of natural numbers is :",Sum)
        
if __name__ == "__main__":
    main()


