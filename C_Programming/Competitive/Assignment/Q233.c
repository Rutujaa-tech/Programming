#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >='a' && *str <= 'z')
        {
            iCount++;
        }
        str++;

        Small(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[50];

    printf("Enter the String:");
    scanf("%[^\n]",arr);

    iRet = Small(arr);

    printf("Number of white spaces are: %d",iRet);

    return 0;
}