#include<iostream>
using namespace std;
/*
Да се реализира рекурсивна функция,
която приема стринг и връща броя на
малките и големите символи в него
*/

bool Upper(char c) {return c >= 'A' && c <= 'Z';}
bool Lower(char c){ return c >= 'a' && c <= 'z';}

void solve(string str, int lowerCnt, int upperCnt, int i)
{
    if(i == str.length())
    {
        cout<<upperCnt<<" "<<lowerCnt<<endl;
        return;
    }
    if(Upper(str[i])) upperCnt++;
    if(Lower(str[i])) lowerCnt++;
    solve(str, lowerCnt, upperCnt, ++i);
}

int main()
{
    string str;
    cin>>str;
    solve(str, 0, 0, 0);
    return 0;
}
