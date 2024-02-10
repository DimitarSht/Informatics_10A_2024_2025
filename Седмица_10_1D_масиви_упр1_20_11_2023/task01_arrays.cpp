/*
Напишете програма, в която да въвеждате n елемента в масив (n по избор на потребителя)
и завъртете елементите на масива така че той да стане огледален.
Нека резултата се принтира в конзолата на един ред.
Пример: 5
[1, 6, 7, 3, 2]
Изход: [2, 3, 7, 6, 1]
*/

#include<iostream>
using namespace std;
int main()
{
    int razmer;
    cin>>razmer;
    int masiv[razmer];
    for(int i=0;i<razmer;i++)
    {
         cin>>masiv[i];
    }
    for(int i=razmer-1;i>=0;i--)
    {
        cout<<masiv[i]<<" ";
    }





    return 0;
}
