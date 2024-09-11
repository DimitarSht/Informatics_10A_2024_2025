#include<iostream>
using namespace std;

double sumaDouble(double a,double b,double c)
{
    double sum = a+b+c;
    return sum;
}
void sumaVoid(double a,double b,double c)
{
    cout<<a+b+c<<endl;
}
void sumaBezParam()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c;
}
int main()
{
    double x,y,z;
    cin>>x>>y>>z;
    cout<<sumaDouble(x,y,z)<<endl;
    sumaVoid(1,2,3);
    sumaBezParam();

    return 0;
}
