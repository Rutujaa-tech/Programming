//Accept number from user and display below pattern.


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# %d * ",iCnt);
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number of elements:");
    scanf(" %d",&ivalue);

    Pattern(ivalue);
    
    return 0;
}