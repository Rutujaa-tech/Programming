//program which accept one number from user and 7th and 10th bit of that number. Return modified number.

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x240;

    iResult = iNo ^ iMask;

    return iResult;
}
int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("modified number is %d\n",iRet);

    return 0;
}