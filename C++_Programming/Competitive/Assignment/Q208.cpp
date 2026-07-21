#include<iostream>
using namespace std;
template <class T>

T AddN(T *arr ,int iSize)
{
    int i = 0;
    T sum = 0;

    for(i = 0; i < iSize; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int iRet = 0;
    float fRet = 0;

    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    iRet = AddN(arr,5);
    cout<<"Addition is :"<<iRet<<"\n";

    fRet = AddN(brr,4);
    cout<<"Addition is :"<<fRet<<"\n";



    return 0;
}