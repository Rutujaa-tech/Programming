#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
    int *Arr;
    int iSize;

    //default
    ArrayX()
    {

    }

    //parametrized constructor
    ArrayX(int X)       
    {

    }
};


int main()
{
    ArrayX aobj1;        //default
    ArrayX aobj2(5);        //parametrized constructor

    cout<<sizeof(aobj1)<<endl;       //12
   

    return 0;
}