// Last Occurance position
//return position of last occurance.
//int lastOccur(PNODE first,int iNo)

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

int LastOccur(PNODE first,int iNo)
{
    int iPos = 1;

    while(first != NULL)
    {
        int iPos = 1;
    int iLastPos = -1;

    while(first != NULL)
    {
        if(first->data == iNo)
        {
            iLastPos = iPos;
        }

        iPos++;
        first = first->next;
    }

    return iLastPos;
    }
}

int main()
{
    PNODE head = NULL;
    
    InsertFirst(&head,11);
    InsertFirst(&head,20);
    InsertFirst(&head,21);
    InsertFirst(&head,50);
    InsertFirst(&head,21);


    int iRet = 0;

    
    Display(head);

    iRet = LastOccur(head, 21);

    printf("Last Occurrence Position : %d\n", iRet);



    return 0;
}

