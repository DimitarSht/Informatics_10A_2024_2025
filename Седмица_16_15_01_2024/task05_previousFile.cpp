#include<iostream>
using namespace std;
/*
5. Да се напише програма, която въвежда квадратна целочислена матрица Аnxn (n ≤ 20), намира  и извежда:
a) сбора на елементите по главния диагонал;
b) произведението на елементите по вторичния диагонал;
c) отрицателните елементи над главния диагонал;
d) всички елементи под вторичния диагонал.
*/
int main()
{
    int n;
    cin>>n;
    int table[n][n];
    int sum = 0, prod = 1;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                sum = sum + table[i][j];
            }
            if(i + j == n - 1)
            {
                prod = prod * table[i][j];
            }
            if(j>i && table[i][j]<0)
            {
                cout<<table[i][j]<<" ";
            }
            if(i+j>=n)
            {
                cout<<table[i][j]<<" ";
            }

        }
    }
    cout<<sum<<" "<<prod;



    return 0;
}
