#include<iostream>
using namespace std;
/*
Задача 2: Напишете програма, която приема стринг
и обръща думите в него, чиято дължина
е поне 3 символа. Приемаме, че въвеждаме
само букви и интервали.
Вход: The quick brown fox jumps over the lazy dog
Изход: ehT kciuq nworb xof spmuj revo eht yzal god
*/
int main()
{
    string s1;
    getline(cin, s1);
    if(s1.size() < 3){
        cout<<"error";
        return 0;
    }
    string s2;
    for(int i = s1.size() - 1; i >= 0; i--){
        s2 = s2 + s1[i];
    }
    cout<<s2<<endl;

    return 0;
}
