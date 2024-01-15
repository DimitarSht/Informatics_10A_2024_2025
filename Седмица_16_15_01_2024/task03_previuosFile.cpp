#include<iostream>
using namespace std;
/*
3. Даден е масив с размери M x N.
Да се изведат онези нейни елементи,
които са разположени в редове с четни номера (0, 2, 4, …).
Извеждането на елементите става по по редове (условен оператор да не се използва).
*/
int main()
{
    int M,N;
    cin>>M>>N;
    int masiv[M][N];
    for (int i=0;i<M;i++)
    {
        for (int k=0;k<N;k++)
        {
            cin>>masiv[i][k];
        }
    }
    for (int i=0;i<M;i=i+2)
    {
        for (int k=0;k<N;k++)
        {

                cout<<masiv[i][k]<<endl;

        }
    }




    return 0;
}
