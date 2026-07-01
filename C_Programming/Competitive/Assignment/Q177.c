//write a program which check whether 5th and 18th bit is On or OFF.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iAns = 0;
    UINT iMask = 0x20010;

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet==TRUE)
    {
        printf("5th and 18th bit is ON");
    }
    else
    {
        printf("5th and 18th bit is OFF");
    }
    return 0;
}