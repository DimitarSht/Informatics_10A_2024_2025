#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
//    cin>>str;/// дума
    getline(cin, str); /// изречение

//    str = str + '!';
//    str = str + " !!!!";
//    str += '!';

    /// Добавя един символ накрая на стринга
    str.push_back('!');
    cout<<str<<endl;

    /// Маха един символ от накрая на стринга
    str.pop_back();

    /// Връща размера на стринга
    /// size и length са еквивалентни
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;

//    str.clear(); /// трие целия стринг
//    str.erase(0,3);   /// трие от позиция 0, 3 символа включително позиция 0

    cout<<str.find("world")<<endl;   /// намира индексът, от който започва world в str


    cout<<str.front()<<endl;

    cout<<str.back()<<endl;


//    cout<<str<<endl;
    return 0;
}
