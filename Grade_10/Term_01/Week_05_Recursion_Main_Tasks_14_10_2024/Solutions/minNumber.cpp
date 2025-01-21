#include<iostream>
using namespace std;
/// Минимално число
/// 6 5 4 3 2 1 -> 1
int minNumber(int n, int MIN)
{
    if(n == 0) return MIN;
    if(n < MIN) MIN = n;
    cin>>n;
    return minNumber(n, MIN);
}

int main()
{
    cout<<minNumber(6, 6);
    return 0;
}
