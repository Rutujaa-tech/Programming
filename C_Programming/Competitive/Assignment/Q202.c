// First Occurance Position
//return position of first occurance.
//int FirstOccur(PNODE first,int iNo)

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node  NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void Display(PNODE first)
{
    while(first != NULL)
    {
        printf(" | %d | ->",first->data);
        first = first -> next;
    }
    printf("NULL\n");
}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    newn->next = *first;
    *first = newn;
}

int FirstOccur(PNODE first,int iNo)
{
    int iPos = 1;

    while(first != NULL)
    {
        if(first->data == iNo)
        {
            return iPos;
        }

        iPos++;
        first = first->next;
    }

    return -1;
}

int main()
{
    PNODE head = NULL;
    
    InsertFirst(&head,11);
    InsertFirst(&head,20);
    InsertFirst(&head,21);
    InsertFirst(&head,40);
    InsertFirst(&head,30);


    int iRet = 0;

    
    Display(head);

    iRet = FirstOccur(head, 20);

    printf("First Occurrence Position : %d\n", iRet);



    return 0;
}

