#include<iostream>
using namespace std;
int* findmid(int* arr, int sz, int target){
    for(int i = 0; i < sz; i++){
        if(arr[i] == target) return arr + i;
    }
    return nullptr;
}
void swap(int* one, int* two){
    int* temp = one;
    one = two;
    two = temp;
}
int* fc(int* nachalo, int sz, int* kraj, int* mid){
    int* temp = new int[sz];
    for(int i = 0; i < sz - 1; i++){
        temp[i] = mid + i;
    }
    for(int i = mid, i < sz; i++){
        temp[i] = nachalo + i;
    }
    return temp;
}
int main(){

    int sz;
    cin>>sz;
    int* arr = new int[sz];
    for(int i = 0; i < sz; i++){
        cin>>arr[i];
    }
    int mid;
    cin>>mid;
    int* temp = findmid(arr, sz, mid);



}
