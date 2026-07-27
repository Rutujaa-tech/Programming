#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        printf("%d\t*\t",i);
        i++;

        Display(iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Value:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}