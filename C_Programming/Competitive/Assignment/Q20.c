// write a program which accept number from user and return difference between summetion of all its factors and nonfactors.
// Input : 12
//Output : -34       (16 - 50)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return(iSumFact - iSumNonFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;

}