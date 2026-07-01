//program which accept one number from user and off 7th and 10th bit of that number.return modified numbwe.

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x240;


    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("modified number is %d",iRet);

    return 0;
}