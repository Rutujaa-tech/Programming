#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    int *Arr;
    int iSize;

    ArrayX(int X)       //Error
    {

    }
};


int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj)<<endl;       //12
   

    return 0;
}