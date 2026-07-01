//program which accept one number and position from user and check whether bit at that position is on or off. if bit is one return true otherwise return false.

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iResult = 0;
    UINT iMask = 0x1;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid bit position\n");
        return FALSE;                             
    }


    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

    return iResult;

   }
int main()
{
    UINT iValue = 0, iLocation = 0;
    BOOL QbRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    printf("Enter Position:");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue,iLocation);

    if(bRet == TRUE)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }
   
    return 0;

}