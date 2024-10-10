#include <iostream>
#include <string>
using namespace std;

void sortStrings(string str1, string str2, string str3)
{
    // Сравняване и подреждане на низовете
    if (str1 > str2)
    {
        swap(str1, str2);
    }
    if (str1 > str3)
    {
        swap(str1, str3);
    }
    if (str2 > str3)
    {
        swap(str2, str3);
    }

    // Извеждане на подредените низове
    cout << "Sorted strings: " << str1 << " " << str2 << " " << str3 << endl;
}

int main()
{
    string str1, str2, str3;

    // Приемане на три символни низа от конзолата
    cout << "String 1: ";
    cin >> str1;
    cout << "String 2: ";
    cin >> str2;
    cout << "String 3: ";
    cin >> str3;

    sortStrings(str1, str2, str3);

    return 0;
}
