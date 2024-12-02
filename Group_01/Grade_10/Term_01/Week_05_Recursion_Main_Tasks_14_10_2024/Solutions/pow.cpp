#include<iostream>
using namespace std;
int stipen(int base, int power)
{
    if(power==0)
    {
        return 1;
    }
    return base * stipen(base, power-1);

}
int main()
{
    int base, power;
    cin>>base>>power;
    cout<<stipen(base, power);
    return 0;
}
