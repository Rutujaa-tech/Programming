#include<iostream>
using namespace std;
template<class T>

T Frequency(T *arr,int iSize,T No)
{
    int i = 0;
    int Count = 0;

    for(i = 0; i < iSize; i++)
    {
        if(arr[i] == No)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int arr [] = {10,20,30,10,30,40,10,40,10};
    float brr [] = {10.4,20.2,30.3,10.4,30.3,40.6,10.4,40.6,10.4};

    int iRet = Frequency(arr,9,10);
    cout<<iRet<<endl;

    float fRet = Frequency(brr,9,10.4f);
    cout<<fRet<<endl;

    return 0;
}