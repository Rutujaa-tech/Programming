//program which check whether 7th & 15th & 21st, 28th bit is on or off.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iAns = 0;
    UINT iMask = 0x8104040;

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

    if(bRet == TRUE)
    {
        printf("7th & 15th & 21th & 28th bit is ON");

    }
    else
    {
         printf("7th & 15th & 21th & 28th bit is OFF");

    }

    return 0;
}