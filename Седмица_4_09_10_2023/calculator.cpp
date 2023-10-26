#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char symbol;
    double x, y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    cout<<"Enter desired operation: "<<endl;
    cin>>symbol;

    switch(symbol)
    {
    case '+':
        cout<<x+y;
        break;
    case '-':
        cout<<x-y;
        break;
    case '*':
        cout<<x*y;
        break;
    case '/':
        cout<<x/y;
        break;
    case '%':
        cout<<(int)x % (int)y;
        break;
    case ''
    default:
        cout<<"Vavedi pravilna operaciq!";
        break;
    }


    return 0;
}
