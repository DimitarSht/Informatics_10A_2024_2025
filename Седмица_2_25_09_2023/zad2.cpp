#include<iostream>
using namespace std;
int main(){

    int a, b, c;
    cin>>a>>b>>c;
    /*if(a < 0){
        a *= -1;
    }
    */
    if(b < 0){
        b *= -1;
    }
    if(c < 0){
        c *= -1;
    }
    int distance1, distance2;
    distance1 = a - b;
    distance2 = a - c;
    if(distance1 < 0){
        distance1 *= -1;
    }
    if(distance2 < 0){
        distance2 *= -1;
    }
    if(distance1 > distance2){
        cout<<"c"<<endl;
    }
    else if(distance1 < distance2){
        cout<<"b"<<endl;
    }
    else{
        cout<<"equal"<<endl;
    }
return 0;
}
