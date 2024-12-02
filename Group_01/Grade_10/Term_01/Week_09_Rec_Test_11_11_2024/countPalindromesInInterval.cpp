#include<iostream>
using namespace std;
/*
Напишете рекурсивна функция,
която намира броя на палиндромите в даден
интервал [a,b].
*/
int rev(int n, int reversed)
{
    if(n == 0) return reversed;
    if(n > 0) reversed = reversed * 10 + n % 10;
    return rev(n/=10, reversed);
}
bool isPalindrome(int n)
{
    return n == rev(n, 0);
}
int cntPalindromesInInterval(int start, int finish, int cnt)
{
    if(start > finish) return cnt;
    if(isPalindrome(start)) ++cnt;
    return cntPalindromesInInterval(++start, finish, cnt);
}

int main()
{
    cout<<cntPalindromesInInterval(10, 1000, 0);

    return 0;
}
