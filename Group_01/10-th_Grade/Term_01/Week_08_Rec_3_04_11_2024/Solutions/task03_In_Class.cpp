#include<iostream>
using namespace std;
/// Сума на прости делители на число

/// Дали число е просто?
bool isPrime(int n, int divisor)
{
    if(n == 2) return true;
    if(n % divisor == 0) return false;
    if(divisor > n/2) return true;
    return isPrime(n, ++divisor);
}
bool prime(int n)
{
    int cnt = 0;
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void sumPrimeDiv(int n, int divisor, int sum)
{
    if(divisor > n/2)
    {
        cout<<sum;
        return;
    }
    if(n % divisor == 0 && isPrime(divisor, 2))
    {
        sum = sum + divisor;
    }
    sumPrimeDiv(n, ++divisor, sum);

}

int main()
{
    sumPrimeDiv(12, 2, 0);

    return 0;
}
