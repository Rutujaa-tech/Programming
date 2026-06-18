//Accept distance in kilometer and convert it into meter.(1Kilometer = 1000 Meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter distance:");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is :%d",iRet);

    return 0;
}