# A program which accept number from user and check whether that number is positive or negative or zero.

def main():
    No = int(input("Enter a number: "))

    if No > 0:
        print("The number is Positive.")
    elif No < 0:
        print("The number is Negative.")
    else:
        print("The number is Zero.")

main()