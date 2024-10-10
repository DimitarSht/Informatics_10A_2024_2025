#include<iostream>
using namespace std;
int main()
{
    string a, b;
    cin>>a>>b;
    for(int i = 0; i < b.length(); i++)
    {
//        a += b[i];
        a.push_back(b[i]);
    }
//    string c = a + b;
//    cout<<a+b;












    return 0;
}
