#include<iostream>
#include<string>
using namespace std;
int main()
{
    string one, two;
    cin>>one>>two;
    if(one.size() < two.size()){
        one.swap(two);
    }
    for(int i = 0; i < one.size() - 1; i++){
        for(int j = i + 1; j < one.size(); j++){
            if(one[i] == one[j]){
                one.erase(j, 1);
            }
        }
        if(i <= two.size()){
        for(int j = i + 1; j < two.size(); j++){
            if(one[i] == two[j]){
                two.erase(j, 1);
            }
        }
        }
    }
    for(int i = 0; i < two.size() - 1; i++){
        for(int j = i + 1; j < two.size(); j++){
            if(two[i] == two[j]){
                two.erase(j, 1);
            }
        }
    }
    int combinedsize = one.size() + two.size();
    cout<<combinedsize;
    return 0;
}

