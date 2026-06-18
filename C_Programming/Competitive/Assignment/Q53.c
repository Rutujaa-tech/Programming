//Accept range from user and return addition of all numbers in between that range.(range should contain positive number only)

#include<stdio.h>
int RangeSum(int iStart , int iEnd)
{
    int iSum = 0;
    int iCnt = 0;

    if((iStart < 0) || (iEnd < 0))
    {
        printf("invalid Range\n");
        return -1;
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
            iSum = iSum + iCnt;
    }
    return iSum;

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point:");
    scanf("%d",&iValue1);

    printf("Enter Ending Point:");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}