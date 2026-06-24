#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
    int *Arr;
    int iSize;

    
    //parametrized constructor
    ArrayX(int X)       
    {
        cout<<"Inside constructor\n";

        iSize = X;                  // Characteristics initialization
        Arr = new int(iSize);       //Reasource Allocation

    }

    //destructor
    ~ArrayX()
    {
        cout<<"Inside destructor\n";

        delete[]Arr;            //Reasource deallocation
    }
};


int main()
{
    
    ArrayX aobj(5);        //parametrized constructor

    return 0;
}