//Input : 5
//output : 1 3 5

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //jump will be 2
    for(iCnt = 1; iCnt <= iNo; iCnt += 2)       //+=
    {
        printf("%d\t", iCnt);
        
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}