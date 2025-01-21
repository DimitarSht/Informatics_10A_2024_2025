#include<iostream>
#include<string>
using namespace std;
//Задача 1: Напишете програма, която
//приема даден стринг и добавя интервал при
//последовалтелност от малка и главна буква.
//Вход: TheQuickBrownFox
//Изход: The Quick Brown Fox
int main()
{
    string str;
    string result;
    cin>>str;
    int length = str.length();
    for(int i = 0; i < length; i++)
    {
        if(i > 0)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                result += ' ';
            }
        }
        result += str[i];
    }
    cout<<result;
    return 0;
}
