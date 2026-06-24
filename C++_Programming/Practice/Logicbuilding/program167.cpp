#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
    int *Arr;
    int iSize;

    public:
    ArrayX(int X = 5)           //parametrized constructor with default argument    
    {
        iSize = X;                  
        Arr = new int(iSize);       
    }


    ~ArrayX()
    {

        delete []Arr;           
    }
};

int main()
{
    ArrayX *aobj1 = new ArrayX();       //Paramterized constructor     
    ArrayX *aobj2 = new ArrayX(15);     //Paramterized constructor    

    //Function call

    delete aobj1;
    delete aobj2;

    return 0;
}