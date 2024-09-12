#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1, str2;
    cin>>str1>>str2;

    if(str1.find(str2)>str1.length())
    cout<<"False";
    else cout<<"True";
    return 0;
}
