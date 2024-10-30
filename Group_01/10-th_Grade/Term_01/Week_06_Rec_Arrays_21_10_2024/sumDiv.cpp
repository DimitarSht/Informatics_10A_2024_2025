#include<iostream>
using namespace std;
int sumDiv(int number, int curr)
{
    if(curr == 1) return 0;
    if(number % curr == 0){
        return curr + sumDiv(number, curr - 1);
    }
    return sumDiv(number, --curr);
}
int main()
{
    cout<<sumDiv(6, 5);
    return 0;
}
