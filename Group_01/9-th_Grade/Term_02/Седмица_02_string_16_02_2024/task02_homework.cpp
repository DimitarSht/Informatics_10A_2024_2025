#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n=3;
    char str[n][100];
        for(int i=0; i<n; i++){

            cin>>str[i];
        }
        for(int i=0; i<n -1; i++){
            for(int j=i+1; j<n-i-1; j++){
                if(strcmp(str[i],str[j])>0){
                    swap(str[i], str[j]);
                }
            }
        }
        for(int i=0; i<n; i++){
        cout<<str[i]<<endl;
        }


    return 0;
}
