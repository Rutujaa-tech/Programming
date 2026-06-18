//Accept on character from user and check whether that character is vowel(a,e,i,o,u) or not.
//Input : E             Output : true
//Input : d             Output : false

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if((CValue == 'a')||(CValue == 'A')||
       (CValue == 'e')||(CValue == 'E')||
       (CValue == 'i')||(CValue == 'I')||
       (CValue == 'o')||(CValue == 'O')||
       (CValue == 'u')||(CValue == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;

    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("enter character:\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel"); 
    }
    return 0;
}