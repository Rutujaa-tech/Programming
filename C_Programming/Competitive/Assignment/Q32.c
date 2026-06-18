//accept amount in US dollar and its corresponding value in Indian currency.

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iResult = 0;

    iResult = iNo * 70;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number of USD:");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}