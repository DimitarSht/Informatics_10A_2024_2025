#include<iostream>
using namespace std;
/*
2. Даден е масив с размери M x N и
цялото число K (1 < K < N).
Да се изведат  елементите от K-я
стълб на дадената  матрица и тяхната сума.
*/
int main()
{
    int M,N,K;
    int sum=0;
    cin>>M>>N>>K;
    int masiv[M][N];
    for (int i=0;i<M;i++)
    {
        for (int k=0;k<N;k++)
        {
            cin>>masiv[i][k];
        }
    }
    for (int i=0;i<M;i++)
    {
        for (int k=0;k<N;k++)
        {
            if(K-1==k)
            {
                cout<<masiv[i][k]<<endl;
                sum = sum + masiv[i][k];
            }
        }
    }
    cout<<sum;



    return 0;
}
