//program which accept string from user reverse that string in place.

#include<stdio.h>

void StrRevX(char *str)
{
    char *Start = NULL;

    Start = str;
    
    while(*str != '\0')
    {
        str++;
    }
    str--;
    
    while(Start <= str)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");
}

int main()
{
    char Arr[20];
     
    printf("Enter string:");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Modified string is %s",Arr);

    return 0;
}