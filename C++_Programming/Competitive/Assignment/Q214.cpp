#include<iostream>
using namespace std;
template<class T>

int SearchFirst(T *arr, int iSize,T No)
{
    int i = 0;

    for(i = iSize; i >= 0; i--)
    {
        if(arr[i] == No)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int  arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    cout<<iRet;

    return 0;

}