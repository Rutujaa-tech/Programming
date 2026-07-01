//program which accept one number, two positions from user and checck whether bit at first or bit bit at second position is ON or OFF.


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0


BOOL ChkBit(UINT iNo,int iPos1,int iPos2)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iMask = 0;
    UINT iResult = 0;

    if(iPos1 < 1 || iPos1 > 32||iPos2 < 1 || iPos2 > 32)
    {
        printf("Invalid bit position\n");
        return FALSE;                             
    }

    iMask1 = iMask1 << (iPos1 - 1);

    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

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
    UINT iValue = 0, iLcation1 = 0, iLcation2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    printf("Enter first position: ");
    scanf("%d",&iLcation1);

    printf("Enter second position: ");
    scanf("%d",&iLcation2);

    bRet = ChkBit(iValue,iLcation1,iLcation2);

    if(bRet == TRUE)
    {
        printf("position of bit is ON\n");
    }
    else
    {
        printf("position of bit is OFF\n");
    }
    
    return 0;
}