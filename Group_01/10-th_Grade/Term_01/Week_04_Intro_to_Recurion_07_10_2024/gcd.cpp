#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if(a == 0) return b;
    if(b == 0) return a;

    return gcd(b, a % b); // a = b*q + r; a%b = r
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<gcd(a, b)<<endl;
    return 0;
}