#include<iostream>
using namespace std;
int suma(int arr[], int sz, int sum, int i)
{
    if(i >= sz)
    {
        return sum;
    }
    sum += arr[i];
    return suma(arr, sz, sum, ++i);
}

int main()
{

    return 0;
}
