// singly linear list.
// search an element check whether a number is present.
//bool search(PNODE head, int No)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#pragma pack(1)
struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
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

void InsertFirst(PPNODE first, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    newn -> next = *first;
    *first = newn;
}
bool Search(PNODE head, int No)
{
    PNODE temp = head;

    while(temp != NULL)
    {
        if(temp->data == No)
        {
            return true;
        }

        temp = temp -> next;
    }

    return false;
}




int main()
{
    PNODE head = NULL;
    bool bRet = false;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    bRet = Search(head,21);

    if(bRet == true)
    {
        printf("Element is present\n");
    }

    else
    {
        printf("element is not present\n");
    }

    




    return 0;
}