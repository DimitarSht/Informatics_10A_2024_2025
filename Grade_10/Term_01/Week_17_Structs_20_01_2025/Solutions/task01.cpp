#include<iostream>
using namespace std;
int* findmid(int* arr, int sz, int target){
    for(int i = 0; i < sz; i++){
        if(arr[i] == target) return arr + i;
    }
    return nullptr;
}

void print(int *begin, int *end)
{
    while (begin < end)
    {
        cout << *begin << " ";
        begin++;
    }
}

void reverse(int *begin, int *end) {
  while (begin < end - 1) {
    std::iter_swap(begin, end - 1);
    ++begin;
    --end;
  }
}

void rotate(int *begin, int *mid, int *end) {
  reverse(begin, mid);
  reverse(mid, end);
  reverse(begin, end);
}

int main(){

    int sz;
    cin>>sz;
    int* arr = new int[sz];
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }
    
    int midIdx;
    cin>>midIdx;
    int* mid = arr + midIdx;

    rotate(arr, mid, arr + sz);
    print(arr, arr + sz);
    



    delete[] arr;



}
