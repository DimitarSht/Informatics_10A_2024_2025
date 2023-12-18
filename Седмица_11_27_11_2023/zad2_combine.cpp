#include<iostream>
using namespace std;
int main()
{
    int sz1, sz2;
    cin>>sz1>>sz2;
    int arr1[sz1 + sz2], arr2[sz2];
    for(int i = 0; i < sz1; i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0; i < sz2; i++)
    {
        cin>>arr2[i];
    }
    for(int i = sz1; i < sz1 + sz2; i++)
    {
        arr1[i] = arr2[i - sz1];
    }
    for(int i = 0; i < sz1 + sz2; i++)
    {
        cout<<arr1[i]<<" ";
    }

    int sz_combined = sz1 + sz2;
    /// Bubble sort
    for (int i = 0; i < sz_combined - 1; i++)
    {
        for (int j = 0; j < sz_combined - i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                swap(arr1[j], arr1[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i = 0 ; i < sz_combined; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}
