#include<iostream>
using namespace std;
template<class T>

T Max(T No1,T No2, T No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }

    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }

    else
    {
        return No3;
    }
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;

    iRet = Max(10,20,30);
    cout<<"Maximum Integer value is : "<<iRet<<"\n";

    fRet = Max(10.5f,20.5f,15.5f);
    cout<<"Maximum Float value is : "<<fRet<<"\n";

    return 0;
}