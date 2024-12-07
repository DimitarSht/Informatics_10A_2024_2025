#include<iostream>
using namespace std;
int remove_duplicates(int pirate[], int sz){
    for(int i = 0; i < sz - 1; i++){
        for(int j = i + 1; j < sz; j++){
            if(pirate[i] == pirate[j]){
                pirate[j] == -1;
            }
        }
    }
}
int common(int uno[], int dos[], int tres[], int s1, int s2, bool broqch){
    int counter = 0;
    for(int i = 0; i < s1; i++){
        for(int j = 0; j < s2; i++){
            if(uno[i] == dos[j]){
                counter++;
                if(!broqch) tres[counter - 1] = uno[i];
            }
        }
    }
    return counter;
}
int main()
{
    int s1, s2;
    cin>>s1>>s2;
    int arr1[s1], arr2[s2];
    for(int i = 0; i < s1; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i < s2; i++){
        cin>>arr2[i];
    }
    remove_duplicates(arr1, s1);
    remove_duplicates(arr2, s2);
    int temp[1];
    int s3 = common(arr1, arr2, temp, s1, s2, true);
    int three[s3];
    common(arr1, arr2, three, s1, s2, false);
    for(int i = 0; i < s3; i++){
        cout<<three[s3]<<endl;
    }
    return 0;
}
