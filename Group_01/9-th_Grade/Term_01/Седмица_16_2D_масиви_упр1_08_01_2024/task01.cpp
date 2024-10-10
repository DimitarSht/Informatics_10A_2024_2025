#include<iostream>
using namespace std;
/*
1. Даден е масив с размери M x N и цялото число K (1 < K < M).
Да се изведат елементите от K-я ред на дадената матрица и тяхната сума.
*/
int main()
{
    int M,N,k,sum=0;
    cin>>M>>N>>k;
    int mas[M][N];
    for(int i=0;i<M;i++)
    {
        for(int p=0;p<N;p++)
            {
                cin>>mas[i][p];
            }
    }
    for(int l=0;l<M;l++)
    {
        for(int f=0;f<N;f++)
        {
            if(l== k - 1)
            {
                sum=sum+mas[l][f];
            }
        }
    }
    cout<<sum<<endl;


    return 0;
}
