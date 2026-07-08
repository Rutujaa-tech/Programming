# A program which accept number from user and print that number of "*" on screen.

def main():

    No = int(input("Enter number:"))

    for i in range (1,No + 1):
        print("*")

if __name__ == "__main__":
    main()