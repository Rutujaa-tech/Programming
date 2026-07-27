#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 1;
    
    if(*str != '\0')
    {
        iCount++;
        str++;

        Strlen(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String:");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("%d",iRet);

    return 0;
}