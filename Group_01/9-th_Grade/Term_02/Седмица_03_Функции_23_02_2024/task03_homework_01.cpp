#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int num=1;
    for(int i=0;i<b.size();i++)
    {
        a.push_back(b[i]);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=a[i-1] && i>0)
        {
            num++;
        }
    }
    cout<<num<<endl;
    return 0;
}
