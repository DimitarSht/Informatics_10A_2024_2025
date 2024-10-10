#include<iostream>
using namespace std;
int main()
{
    int sz;
    cin>>sz;
    int arr[sz];
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }

    /// Remove elements
    for(int i = 0; i < sz; i++)
    {
        if(arr[i] == 3)
        {
            for(int j = i; j < n; j++)
            {
                arr[j] = arr[j+1];
            }
        }
    }

    /// Min and Max
    int Min=1000, Max=-1000;
    //int Min=arr[0], Max=arr[0];
    for(int i = 0; i < sz; i++)
    {
        /// Minimum
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
        /// Maximum
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }

    /// Combine two arrays
    int sz1 = 3, sz2 = 4;
    int arr1[sz1] = {}
    int arr2[sz2];




    return 0;
}
