#include<iostream>
using namespace std;
/*
Задача 4:
Напишете функция
bool mutallyPrime(int n, int k),
която да връща истина, ако две
те числа n и k са взаимно прости.
Пример: n=12, k= 7
Изход: true
*/
bool mutallyPrime(int n, int k)
{
    bool prime = 0;
    if(n < k)
    {
        swap(n,k);
    }
    for(int i = 2; i < n; i++)
    {
        if(n % k == 0)
        {
            prime = false;
        }
        else
        {
            prime = true;
        }
    }
    return prime;
}

int main()
{
    int n, k;
    cin>>n>>k;
    cout<<mutallyPrime(n,k);
    return 0;
}
