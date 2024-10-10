#include<iostream>
using namespace std;
int main()
{
    char symbol;
    double x, y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    cout<<"Enter desired operation: "<<endl;
    cin>>symbol;

    if(symbol == '+')  
        cout<<x+y;
    else if(symbol == '-')
        cout<<x-y;
    else if(symbol == '*')
        cout<<x*y;
    else if(symbol == '/')
        cout<<x/y;
    else cout<<"Vavedi pravilna operaciq!"; 

    return 0;
}