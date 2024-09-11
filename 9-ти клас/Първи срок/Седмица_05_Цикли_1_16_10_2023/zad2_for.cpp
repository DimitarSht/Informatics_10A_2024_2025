#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;

    for(int i=10; i<=n; i++){
       sum=sum+i%10+i/10;
    }
    cout<<sum;

return 0;
}
