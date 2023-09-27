#include<iostream>
using namespace std;
int main()
{
   int n, a = 0, b = 0, c = 0;
   bool d;
   // d = 0 || d = 1
   cin>>n;
   a = n % 10;
   if(a != 0 && n % a == 0)
   {
       n = n / 10;
        b = n % 10;
        if(b != 0 && n % b == 0)
        {
            n = n / 10;
            c = n % 10;
            if(n % c == 0)
            {
                d = 1;
            }
        }
        else
        {
            cout<<"Greshka!!!";
        }
   }
   else
   {
       cout<<"Greshka!!!";
   }
   if(d == 1)
   {
        cout<<d;
   }


return 0;
}
