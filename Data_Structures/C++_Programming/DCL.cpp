// Doubly Circular Linked List in CPP

#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

class DoublyCL
{
    private:
        struct node *first;
        struct node *last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyCL :: DoublyCL()
{
    cout<<"Inside constructor\n";

    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void DoublyCL :: Display()
{
    struct node *temp = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        return;
    }

    temp = this->first;

    cout<<"<=> ";

    do
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;

    }while(temp != this->first);

    cout<<"\n";
}

int DoublyCL :: Count()
{
    return this->iCount;
}

void DoublyCL :: InsertFirst(int iNo)
{
    struct node *newn = NULL;

    newn = new struct node;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }

    this->last->next = this->first;
    this->first->prev = this->last;

    this->iCount++;
}

void DoublyCL :: InsertLast(int iNo)
{
    struct node *newn = NULL;

    newn = new struct node;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        newn->prev = this->last;
        this->last = newn;
    }

    this->last->next = this->first;
    this->first->prev = this->last;

    this->iCount++;
}

void DoublyCL :: InsertAtPos(int iNo,int iPos)
{
    int i = 0;

    struct node *temp = NULL;
    struct node *newn = NULL;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
        return;
    }

    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
        return;
    }

    else
    {
        newn = new struct node;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = this->first;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        this->iCount++;
    }
}

void DoublyCL :: DeleteFirst()
{
    struct node *temp = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        return;
    }

    else if(this->first == this->last)
    {
        delete this->first;

        this->first = NULL;
        this->last = NULL;
    }

    else
    {
        temp = this->first;

        this->first = this->first->next;

        delete temp;

        this->last->next = this->first;
        this->first->prev = this->last;
    }

    this->iCount--;
}

void DoublyCL :: DeleteLast()
{
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }

    else if(this->first == this->last)
    {
        delete this->first;

        this->first = NULL;
        this->last = NULL;
    }

    else
    {
        struct node *temp = this->last;

        this->last = this->last->prev;

        delete temp;

        this->last->next = this->first;
        this->first->prev = this->last;
    }

    this->iCount--;
}

void DoublyCL :: DeleteAtPos(int iPos)
{
    int i = 0;

    struct node *temp = NULL;
    struct node *target = NULL;


    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }


    if(iPos == 1)
    {
        DeleteFirst();
    }

    else if(iPos == iCount)
    {
        DeleteLast();
    }

    else
    {
        temp = this->first;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        target->next->prev = temp;

        delete target;

        this->last->next = this->first;
        this->first->prev = this->last;

        this->iCount--;
    }
}


int main()
{
    int iRet = 0;

    DoublyCL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(111);
    dobj.InsertLast(121);
    dobj.InsertLast(151);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";


    dobj.DeleteFirst();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";


    dobj.DeleteLast();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";


    dobj.InsertAtPos(105,4);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";


    dobj.DeleteAtPos(4);

    dobj.Display();

    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";


    return 0;
}