#include<iostream>
using namespace std;
int main()
{
    int n = 4; /// размер на таблицата
    int table[n][n];
    for(int i = 0; i < n; i++)
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
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)  /// главен диагонал
            {
                cout<<table[i][j]<<" ";
            }
            if(i + j == n - 1) /// второстепенен главен диагонал
            {
                cout<<table[i][j]<<" ";
            }

            if(i < j) /// всички НАД главния диагонал
            {
                cout<<table[i][j]<<" ";
            }
            if(i > j) /// всички ПОД главния диагонал
            if(i+j < n - 1) /// всички НАД ВТОРИЯ главен диагонал
            if(i+j > n - 1) /// всички ПОД ВТОРИЯ главен диагонал
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    return 0;
}
