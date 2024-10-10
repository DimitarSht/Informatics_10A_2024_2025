#include<iostream>
#include<cstring>
using namespace std;
int main()
{
//    Hello Pesho!
    string hello = "Hello ";
    string str;
    getline(cin, str);
    hello += str;
    cout<<hello;

    char Hello[] = "Hello ", arr[100];
    cin>>arr;
    char newArr[10000];
    strcpy(newArr, Hello);
    strcat(newArr, arr);
    cout<<newArr;


    return 0;
}
