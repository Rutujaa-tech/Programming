//input : 8
//Output : 2 4 6 8 10 12 14 16
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number of elements:");
    scanf(" %d",&ivalue);

    Pattern(ivalue);
    
    return 0;
}