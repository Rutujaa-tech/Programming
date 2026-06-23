#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    int iCount = 0;
  

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
    }

    return iCount;

}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("%d",iRet);
    return 0;
}