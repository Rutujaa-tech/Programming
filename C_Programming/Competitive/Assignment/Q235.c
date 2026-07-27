#include<stdio.h>

void Reverse(int iNo)
{

    if(iNo > 0)
    {
        printf("%d\t",iNo);
        iNo--;

        Reverse(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Reverse(iValue);
    
    return 0;
}