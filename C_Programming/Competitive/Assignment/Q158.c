#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    int iCount1 = 0;
    int iCount2 = 0;
  

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount1++;
        }
         if(*str >= 'a' && *str <= 'z')
        {
            iCount2++;
        }
        str++;
    }

    if(iCount1 > iCount2)
    {
        return (iCount1 - iCount2);
    }
    else
    {
        return (iCount2 - iCount1);
    }

}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("%d",iRet);
    return 0;
}