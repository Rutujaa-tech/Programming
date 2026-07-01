//program which accept one number from user and toggle 7th bit of that number.Return modified number.

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x40;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0 , iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("modified number is %d",iRet);

    return 0;
}