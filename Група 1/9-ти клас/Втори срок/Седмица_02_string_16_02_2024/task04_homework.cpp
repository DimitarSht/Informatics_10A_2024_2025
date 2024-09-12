#include<iostream>
#include<cstring>
using namespace std;
/*
Напишете програма, която намира най-дългия
палиндром в даден чар масив.
Вход:
аdcdcdy
Изход:
5
*/
int main()
{
    char word[100];
    cin>>word;
    int start = 0;
    int finish = strlen(word) - 1;
    bool isPalindrome = false;
    int maxPalindrome = 0, currPalindrome = 0;
    while(start < finish)
    {
        if(word[start] == word[finish])
        {
            isPalindrome = true;
        }
        else
        {
            isPalindrome = false;
        }
        if(isPalindrome)
        {
            currPalindrome++;
        }
        if(currPalindrome > maxPalindrome)
        {
            maxPalindrome = currPalindrome;
        }
        start++;
        finish--;
    }
    if(strlen(word) % 2 == 1)
    {
        cout<<maxPalindrome*2 + 1;
    }
    else
    {
        cout<<maxPalindrome*2;
    }

    return 0;
}
