#include<iostream>
using namespace std;
bool contains(int arr[], int sz, int i, int k)
{
    if(arr[i] == k) return true;
    if(i == sz) return false;
    return contains(arr, sz, ++i, k);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<contains(arr, n, 0, 5);
    return 0;
}
