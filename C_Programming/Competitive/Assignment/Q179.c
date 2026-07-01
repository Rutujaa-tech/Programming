//program which check whether first and last bit On or Off. first bit means bit number 1 and last bit means bi number 32.

//program which check whether 7th & 15th & 21st, 28th bit is on or off.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iAns = 0;
    UINT iMask = 0x80000001;

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
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("first & last bit is ON");

    }
    else
    {
         printf("first & last bit is OFF");

    }

    return 0;
}