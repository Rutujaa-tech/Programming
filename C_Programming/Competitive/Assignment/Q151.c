#include<stdio.h>

void DisplayASCII()
    {
       int i = 0;
       for(i = 1; i <= 255; i++)
       {
        if(i >= 32)
        {
            printf("%d\t%X\t%c\t%o\t\n",i,i,i,i);
        }

        else
        {
            printf("%d\t%X\t%o\tnot Printable\n",i,i,i);
        }
       } 
    }

int main()
{
     DisplayASCII();
    
    return 0;
}