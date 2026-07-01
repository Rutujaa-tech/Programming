//program which accept one number from user and check whetherr 9th or 12th bit is on or off.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0


BOOL ChkBit(UINT iNo)
{
    UINT iResult = 0;
    UINT iMask = 0x100 | 0x800;

    iResult = iMask & iNo;

    if(iResult != 0)
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
        printf("9th or 12th bit is ON\n");
    }
    else
    {
        printf("9th or 12th bit is OFF\n");
    }
    
    return 0;
}