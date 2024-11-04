#include<iostream>
#include<string>
using namespace std;
/// Палиндром
/// abcba
bool isPalindrome(int start, int End, string str)
{
    if(start > End) return true;
    if(str[start] != str[End]) return false;
    return isPalindrome(++start, --End, str);
}

int main()
{
    string str;
    cin>>str;
    int start = 0;
    int End = str.size() - 1;
    if(isPalindrome(start, End, str)) cout<<"True";
    else cout<<"False";


    return 0;
}
