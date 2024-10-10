#include<iostream>
using namespace std;
int main()
{
    int razmer;
    cin>>razmer;
    int masiv[razmer]; //= {0,1,2,3,4};
    for(int i = 0; i < razmer; i++)
    {
        cin>>masiv[i];
    }

    for(int i = 0; i < razmer; i++)
    {
        masiv[i] = i;
    }
    for(int i = 0; i < razmer; i++)
    {
        cout<<masiv[i]<<" ";
    }


return 0;
}
