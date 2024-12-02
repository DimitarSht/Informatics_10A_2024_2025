#include<iostream>
#include<cmath>
using namespace std;
int stipen(int base, int power)
{
    if(power==0)
    {
        return 1;
    }
    return base * stipen(base, power-1);

}
int quickPow(int base, power)
{
    if(n % 2 == 0)
    {
        return stipen(base, power * power / 4);
    }
    return base * quickPow(base, power * power / 4);
}
int main()
{
    return 0;
}
