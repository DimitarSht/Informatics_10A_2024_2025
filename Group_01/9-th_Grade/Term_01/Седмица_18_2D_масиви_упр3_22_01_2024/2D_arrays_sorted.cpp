#include<iostream>
using namespace std;
int main()
{
    int n = 3;
    int rows = n, cols = n;
    int table[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>table[i][j];
        }
    }
    //Sorting rows with bubble sort
    /*for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            for(int k = 0; k < n - j - 1; k++)
            {
                if(table[i][k] > table[i][k+1])
                {
                    swap(table[i][k], table[i][k+1]);
                }
            }
        }
    }*/
    int min_idx;
    //Sorting columns with Selection Sort
    for(int k = 0; k < cols; k++)
    {
        for(int i = 0; i < n; i++)
        {
            min_idx = i;
            for(int j = i + 1; j < n; j++)
            {
                if(table[min_idx][k] > table[j][k])
                {
                    min_idx = j;
                }
            }
            if(min_idx != i)
            {
                swap(table[i][k], table[min_idx][k]);
            }
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


    return 0;
}
