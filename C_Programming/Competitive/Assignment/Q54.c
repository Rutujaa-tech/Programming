//Accept range from user and return addition of all even numbers in between that range.(Range should contains positive numbers only)

#include<stdio.h>
int RangeSumeven(int iStart , int iEnd)
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
       if(iCnt % 2 == 0)
       {
            iSum = iSum + iCnt;
       }
        
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

    iRet = RangeSumeven(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}