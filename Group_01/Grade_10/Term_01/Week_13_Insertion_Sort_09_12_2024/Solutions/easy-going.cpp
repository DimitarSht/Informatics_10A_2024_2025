#include<iostream>
using namespace std;
void solve(int arr[], int a)
{
    for(int i = 1; i < a; i++)
    {
        int key = arr[i], j = i - 1;
        while(j >= 0 && arr[i] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int razmer, chislo, sum_min = 0, sum_max = 0;
    cin>>razmer>>chislo;
    int arr[razmer];
    for(int i = 0; i < razmer; i++)
    {
        cin>>arr[i];
    }
    solve(arr, razmer);
    for(int i = 0; i < razmer; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i = 0; i < razmer - chislo; i++)
    {
        sum_max += arr[i];
    }
    for(int i = razmer -1; i >= chislo; i--)
    {
        sum_min += arr[i];
    }
    cout<<sum_min<<" "<<sum_max;
    cout<<endl;
    return 0;
}

