# a program which accept one number and display below pattern.
'''
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

'''

def Pattern(No):
    for i in range(1, No + 1):
        for j in range(1, No + 1):
            if (j <= i):
                print(j, end=" ")
            
        print()

def main():
    Value = int(input("Enter number: "))
    Pattern(Value)

if __name__ == "__main__":
    main()