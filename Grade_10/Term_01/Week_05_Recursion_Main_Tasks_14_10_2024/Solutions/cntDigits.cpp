#include<iostream>
using namespace std;
/// Брой цифри на число
void cntDigits(int n, int cnt)
{
    if(n < 10)
    {
        cout<<cnt + 1<<endl;
        return;
    }
    cntDigits(n /= 10, ++cnt);
}

int main()
{
    cntDigits(123456, 0);

    return 0;
}
