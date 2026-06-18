//Accept number of rows and number of coloumns from user and display below pattern.
//input : iRow = 4      iCol = 4
// Output : a b c d e 
//          1 2 3 4 5 
//          a b c d e
//          1 2 3 4 5


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';
   
    for(i = 1; i <= iRow; i++)
    {
       
    for(j = 1,ch = 'a'; j <= iCol; j++,ch++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t",j);
            
        }
        else
        {
            printf("%c\t",ch);
           
        }

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