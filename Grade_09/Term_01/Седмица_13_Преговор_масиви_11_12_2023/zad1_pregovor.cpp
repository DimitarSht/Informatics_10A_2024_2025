#include<iostream>
using namespace std;
/*
Да се напише програма, която намира и извежда сумата
от положителните и произведението на отрицателните
елементи на редицата
от реални числа a0, a1, a2,…, an-1(1 <= n <= 20).
*/
int main()
{
    int sum = 0, prod = 1;
    int sz;
    cin>>sz;
    int arr[sz];
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < sz; i++)
    {
        if(arr[i] > 0)
        {
            sum += arr[i];
        }
        else if(arr[i] < 0)
        {
            prod *= arr[i];
        }
    }
    cout<<sum<<" "<<prod;

    return 0;
}
