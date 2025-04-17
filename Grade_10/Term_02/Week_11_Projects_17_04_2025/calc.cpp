/// Примерен файл за начално меню на проект

#include<iostream>
using namespace std;
void add(int a, int b)
{
    cout<<a + b<<endl;
}
int main()
{
    while(true)
    {
        int a, b;
        char br;
        char op;
        cout<<"Welcome!"<<endl;
        cout<<"Please enter number 1: ";
        cin>>a;
        cout<<"Please enter number 2: ";
        cin>>b;
        cout<<"Please enter an operation: ";
        cin>>op;
        switch (op)
        {
        case '+':
            add(a, b);
            break;
        case '-':
            cout<<a - b<<endl;
            break;
        default:
            cout<<"Invalid operation!"<<endl;
            break;
        }
        cout<<"Do you want to continue? Y/N"<<endl;
        cin>>br;
        if(br == 'N')
        {
            cout<<"Goodbye!"<<endl;
            break;
        }
    }
    return 0;
}
