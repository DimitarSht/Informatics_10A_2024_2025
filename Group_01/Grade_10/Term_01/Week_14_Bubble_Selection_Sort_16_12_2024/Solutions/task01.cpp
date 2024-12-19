
#include <iostream>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        a[i]=a[i]+b[i];
    }
    for(int i=0; i<n-1; i=i+q)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]<a[j+1])
            {
                swap(a[j],a[j+1]);
                q=n-j-1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
