#include <iostream>
using namespace std;
int main()
{
    for(int i=2;i<1000;i++)
    {
        bool prostoLiE=true;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                prostoLiE=false;
            }
        }
        if(prostoLiE)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
