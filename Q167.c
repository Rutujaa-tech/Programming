// program which accept string from user and accept one character. return frequency of that character.

#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue;
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Character frequency is %d",iRet);

    return 0;
}