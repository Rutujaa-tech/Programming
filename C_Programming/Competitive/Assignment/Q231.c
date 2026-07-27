#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;

        WhiteSpace(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[50];

    printf("Enter the String:");
    scanf("%[^\n]",arr);

    iRet = WhiteSpace(arr);

    printf("Number of white spaces are: %d",iRet);

    return 0;
}