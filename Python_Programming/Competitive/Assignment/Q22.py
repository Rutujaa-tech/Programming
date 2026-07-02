# program which accept one number and prints that many numbers starting from 1.

def main():

    No = int(input("Enter number is:"))

    for i in range (1,No+1):
        print(i)
    

if __name__ == "__main__":
    main()