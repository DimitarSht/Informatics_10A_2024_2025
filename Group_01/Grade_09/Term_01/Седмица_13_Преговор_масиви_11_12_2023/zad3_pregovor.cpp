#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    int sum=0;
    for(int i=0 ;i<n; i++){
          cin>>array[i];
          sum=sum+array[i];

    }
     double sr= sum/n;
    for(int i=0; i<n; i++){
        if(sr<array[i]){
            cout<<array[i]<<" ";
        }
    }
return 0;
}
