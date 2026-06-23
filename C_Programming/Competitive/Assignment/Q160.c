#include<stdio.h>

void Reverse(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A'&& *str <= 'Z')
        {
            *str = *str + 32;
            printf("%c",*str);
        }
        else if(*str >= 'a'&& *str <= 'z')
        {
            *str = *str - 32;
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;

}
