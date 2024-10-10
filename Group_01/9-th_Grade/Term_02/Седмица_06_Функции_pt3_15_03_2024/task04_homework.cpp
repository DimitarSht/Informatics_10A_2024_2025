#include<iostream>
#include<cstring>
using namespace std;
void multiply(string masiv)
{
    int duljina=masiv.length();
    string big_masiv;
    for(int i=0; i<duljina; i++)
    {
        for(int k=0; k<duljina; k++)
        {
            big_masiv+=masiv[i];
        }
    }
    for(int i = 0; i < big_masiv.length(); i = i + 5)
    {
        for(int j = 0; j < duljina; j++)
        {
            cout<<big_masiv[i];
        }
        cout<<endl;
    }
}
int main()
{
    string masiv;
    getline(cin,masiv);
    multiply(masiv);
    return 0;
}

/*
#include<iostream>
#include<cstring>
using namespace std;
void letter(string str)
{
    int count = 0;

    size_t size = str.length();
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<str[i];
        }
        cout<<" ";
    }
//    return; - пишем тогава и само тогава когато искаме да прекъснем ПРЕДВАРИТЕЛНО изпълнението на функцията
}
int main()
{
    string str;
    getline(cin, str);
    letter(str);
}
*/

