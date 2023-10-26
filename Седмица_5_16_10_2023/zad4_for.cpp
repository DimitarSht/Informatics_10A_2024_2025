#include<iostream>
using namespace std;
int main()
{
    int broi=0,pro=1;
    for(int i=100; i<=999; i++)
    {
        if(pro*(i%10)*(i/10%10)*(i/100)!= 0)
        {
            pro=pro*(i%10)*(i/10%10)*(i/100);
            if(i%pro==0)
            {
                cout<<i<<" ";
                broi++;
            }
        }
        pro=1;
    }
    cout<<broi<<endl;
    return 0;
}
