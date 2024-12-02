#include<iostream>
using namespace std;
void sumEl(int arr[], int sz, int i, int sum)
{
    if(i == sz)
    {
        cout<<sum<<endl;
        return;
    }
    sum += arr[i];
    sumEl(arr, sz, ++i, sum);
}

bool palindrome(string str, int i)
{
    if(i == (str.size()+ 1) / 2)
    {
        return true;
    }
    if(str[i] != str[str.size() - i - 1])
    {
        return false;
    }
    return palindrome(str, ++i);
}

int main()
{
   cout<<palindrome("abbd", 0);


    return 0;
}
