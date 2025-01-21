#include<iostream>
using namespace std;
/// Рекурсивно сортиране
void sort1(int n, int arr[], int i, int k)
{
    if (k == n) return;
    if (arr[i] < arr[k])
    {
        swap(arr[i], arr[k]);
    }
    sort1(n, arr, i, k + 1);
}
void sorting (int n, int arr[], int i)
{
    if (i == n)
    {
        return;
    }
    sort1 (n, arr, i, 0);
    sorting (n, arr, i + 1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sorting(n, arr, 0);
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}
