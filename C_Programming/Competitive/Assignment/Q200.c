//Display only Even elements
//void DisplayEven(PNODE first);

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


void DisplayEven(PNODE first)
{
     while(first != NULL)
    {
        if(first ->data % 2 == 0)
        {
            printf("| %d | -> ", first->data);
        }
        
        first = first->next;
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

int main()
{
    PNODE head = NULL;
    
    InsertFirst(&head,11);
    InsertFirst(&head,20);
    InsertFirst(&head,21);
    InsertFirst(&head,20);
    InsertFirst(&head,30);

    DisplayEven(head);

    return 0;
}

