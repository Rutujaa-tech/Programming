//program which accept one number from user and on its first 4 bit. Return modified number.


#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0xf;

    iResult = iMask | iNo;

    return iResult;
}


int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("modified number is %d",iRet);

    return 0;
}