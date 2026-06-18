//Accept range from user and Display all numbers in between that range.

#include<stdio.h>

void RangeDisplay(int Start, int End)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= End; iCnt++)
    {
        if(iCnt >= Start)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Starting point:");
    scanf("%d",&iValue1);

    printf("Enter Ending point:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1 , iValue2);



    return 0;

}