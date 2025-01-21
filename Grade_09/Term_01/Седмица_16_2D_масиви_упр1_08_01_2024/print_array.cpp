#include<iostream>
using namespace std;
int main()
{
    int rows, cols;
    cin>>rows>>cols;
    char table[rows][cols];
    for(int i = 0 ; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin>>table[i][j];
        }
    }
    for(int i = 0 ; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i<=j) /// САМО ЗА КВАДРАТНИ!!!
            {
                cout<<table[i][j]<<" ";
            }

        }
        cout<<endl;
    }

    return 0;

}
