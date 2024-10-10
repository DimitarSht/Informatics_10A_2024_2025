#include<iostream>
using namespace std;
int pow(int base, int power)
{
    if(power == 0) return 1;
    return base * pow(base, power-1);
}
int main()
{
    cout<<pow(2, 10);
}
