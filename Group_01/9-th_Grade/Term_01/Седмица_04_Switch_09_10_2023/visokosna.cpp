#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    int year1 = year % 4;
    switch(year1)
    {
    case 0:
        cout<<"Visokosna e";
        break;
    default:
        cout<<"Ne e visokosna";
        break;
    }

return 0;
}
