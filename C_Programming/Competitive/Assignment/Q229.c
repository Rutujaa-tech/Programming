# include<stdio.h>

int Fact(int iNo)
{
    static int iMult = 1;
    static int i = 1;

    if(i <= iNo)
    {
        iMult = iMult * i;
        i++;

        Fact(iNo);
    }
    return iMult;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0;
}