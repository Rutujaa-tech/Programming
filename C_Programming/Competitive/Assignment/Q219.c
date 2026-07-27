#include<stdio.h>

void Display()
{
    static char ch = 'A';

    if(ch <= 'E')
    {
        printf("%c \t",ch);
        ch++;

        Display();
    }
}

int main()
{
    Display();

    return 0;
}