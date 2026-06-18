//Accept range from user and Display all even numbers in between that range.

#include<stdio.h>

void RangeDisplayEven(int Start, int End)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= End; iCnt++)
    {
        if((iCnt >= Start)&&(iCnt % 2 == 0))
        {
            printf("%d\t",iCnt);
        }

    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Starting Point:");
    scanf("%d",&iValue1);

    printf("Enter Ending Point:");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1 , iValue2);


    return 0;
}