#include<iostream>
using namespace std;
void sorting(string& pirate){
    for(int i = 0; i < pirate.size() - 1; i++){
        for(int j = i + 1; j < pirate.size(); j++){
            if(pirate[i] < pirate[j]){
                swap(pirate[i], pirate[j]);
            }
        }
    }
}
int main()
{
    string str1, str2;
    cin>>str1>>str2;
    sorting(str1);
    sorting(str2);
    if(str1 == str2) cout<<1;
    else cout<<2;

    return 0;
}
