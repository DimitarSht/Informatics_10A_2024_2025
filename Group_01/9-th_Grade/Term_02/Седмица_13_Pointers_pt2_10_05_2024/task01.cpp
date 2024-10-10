#include<iostream>
using namespace std;
/*
Задача 1:
Напишете функция, която приема 3 стринга - text,
where и what и замества в text
всяко срещане на where с what.
Да се реши без допълнителна памет, т.е.
без създаване на нов
допълнителен масив.
Вход: "I am the best of the best "best "worst"
Изход: "I am the worst of the worst"
*/

void changeStr(string text, const string where, const string what)
{
    int i = text.find(where);
    int diff = where.size() - what.size();
    for(int j = i; j < text.size(); j++)
    {
        text[j] = text[j+diff];
    }
    text.erase(i, where.size());
    int cnt = 0;
    while(what[cnt] != '\0')
    {
        text[i] = what[cnt];
    }

}

int main()
{

    return 0;
}
