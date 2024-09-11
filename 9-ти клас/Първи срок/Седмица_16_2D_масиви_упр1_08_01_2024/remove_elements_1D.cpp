#include<iostream>
using namespace std;
int main()
{
    int sz = 5;
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            for(int j = i; j < 5 - i; j++)
            {
                arr[j] = arr[j+1];
            }
            sz--;
        }

    }
    for(int i = 0; i < sz; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
