#include<iostream>
using namespace std;
int main()
{
    ///a
    /*int n;
    double s=0;
    cin>>n;
    for(double i=1;i<n;i++)
    {
        s=s+i/(i+1);
    }
    cout<<s<<endl;*/

    ///b
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 0; i<n; i++)
    {
        sum = sum + i*(i+1);
        if (sum == n)
        {
            break;
        }
    }
    cout<<sum;


    return 0;
}
