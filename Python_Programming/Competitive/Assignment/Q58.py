# A program which accept name from user and display length of its name.

def main():
    Name = input("Enter name:")

    Ret = len(Name)

    print("Length of name is:",Ret)

if __name__ == "__main__":
    main()