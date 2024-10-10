#include <iostream>
using namespace std;
int main()
{
    int counter=0;
    for(int i=100; i<1000; i++){
        int n1,n2,n3;
        n1=i/100;
        n2=(i/10)%10;
        n3=i%10;
        if(n1+n2+n3==19){
            cout<<i<<" ";
            counter++;
        }

    }cout<<endl;
    cout<<counter;
return 0;
}
