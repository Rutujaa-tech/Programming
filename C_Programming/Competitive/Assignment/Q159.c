#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a'|| *str == 'e'||*str == 'i'|| *str == 'o'||*str == 'u'||
        *str == 'A'|| *str == 'E'||*str == 'I'|| *str == 'O'||*str == 'U')
        {
            return TRUE;
        }
        str++;
}

     return FALSE;
}

int main()
{
    char Arr [20];
    BOOL bRet = FALSE;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel.");
    }
    else
    {
        printf("There is no Vowel.");
    }

    return 0;
}