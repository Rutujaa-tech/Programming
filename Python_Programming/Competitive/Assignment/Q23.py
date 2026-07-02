# program which accept one number and prints that many numbers in reverse order.

def main():

    No = int(input("Enter number is:"))

    for i in range (No,0,-1):
        print(i)
    

if __name__ == "__main__":
    main()