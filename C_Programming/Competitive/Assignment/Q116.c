//Accept number of rows and number of coloumns from user and display below pattern.
//input : iRow = 4      iCol = 4
// Output : A B C D 
//          A B C D
//          A B C D
//          A B C D


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
    for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("enter number of row :");
    scanf("%d",&ivalue1);

    printf("enter number of coloumns:");
    scanf(" %d",&ivalue2);

    Pattern(ivalue1,ivalue2);
    
    return 0;
}