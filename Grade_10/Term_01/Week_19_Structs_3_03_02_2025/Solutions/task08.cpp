#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    string destination;
    string temp1, temp2;
    getline(cin, str);
    int end = str.length(); // Сочи към края на текущата дума

    // Обхождаме стринга от края към началото
    for (int i = str.length() - 1; i >= 0; --i)
    {
        if (str[i] == ' ')
        {
            // Когато намерим интервал, взимаме думата от i+1 до end
            if (i + 1 < end)
            {
                destination += str.substr(i + 1, end - (i + 1)) + " ";  // substr(start, End) взима символите от start до End
            }
            end = i; // Краят на следващата дума
        }
    }

    // Добавяме първата дума, тъй като няма интервал преди нея
    if (end > 0)
    {
        destination += str.substr(0, end);
    }

    cout<<destination;

    return 0;
}
