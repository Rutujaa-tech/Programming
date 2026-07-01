//program which accept one number from user and toggle contents of first and last nibble of the number.return modified number(nibble is group of four bits).

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0xf000000f;

    iResult = iMask ^ iNo;

    return iResult;
}

int main()
{
     UINT iValue = 0, iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("modified number is %u\n",iRet);

    return 0;
}