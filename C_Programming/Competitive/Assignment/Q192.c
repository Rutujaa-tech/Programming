//program which accept two numbers from user and display position of common ON bits from that two numbers.

#include<stdio.h>

typedef unsigned int UINT;

void CommonsBit(UINT iNo1, UINT iNo2)
{
    UINT iCommon = 0;
    UINT iMask = 0x1;
    int iPos = 1;

    iCommon = iNo1 & iNo2;
    
    while(iMask != 0)
    {
        if(iCommon & iMask)
        {
            printf("%d ",iPos);
        }
        iPos++;
        iMask = iMask << 1;
    }
}
int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter first number: ");
    scanf("%d",&iValue1);

    printf("Enter second number: ");
    scanf("%d",&iValue2);

    CommonsBit(iValue1,iValue2);


    return 0;
}