//Accept number from user and display below patterrn.

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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