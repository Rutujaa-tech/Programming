//program to which accept one number from user and range of positions from user.Toggle all bits from that range.

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iResult = 0;
    UINT iMask = 0;

    if((iStart < 1) || (iEnd > 32) || (iStart > iEnd))
    {
        printf("Invalid Range!\n");
        return iNo;
    }
    iMask = (0xFFFFFFFF << (iStart - 1)) & (0xFFFFFFFF >> (32 - iEnd));

    iResult = iNo ^ iMask;

    return iResult;


    
}

int main()
{
    UINT iValue = 0, iRet = 0,iStart = 0, iEnd = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    printf("Enter start position: ");
    scanf("%d", &iStart);

    printf("Enter end position: ");
    scanf("%d", &iEnd);

    iRet = ToggleBitRange(iValue, iStart, iEnd);

    printf("Modified number after toggling range is: %u\n", iRet);

   return 0;
}