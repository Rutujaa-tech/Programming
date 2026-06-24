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
    // Static memory allocation for object
    //arrayX aobj1(5);

    ArrayX *aobj1 = new ArrayX(5);        //parametrized constructor

    delete aobj1;

    cout<<"End of main\n";

    return 0;
}