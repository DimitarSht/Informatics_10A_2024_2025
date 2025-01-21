#include <iostream>
#include <string>
using namespace std;

// Функция за кодиране на трите низа
string encode(const string str1, const string str2, const string str3) {
    string encodedStr;

    // Съставяне на кодирания низ
    for (int i = 0; i < str1.length(); ++i) {
        encodedStr += str1[i];
        encodedStr += str2[i];
        encodedStr += str3[i];
    }

    return encodedStr;
}

// Функция за декодиране на кодирания низ
void decode(const string encodedStr) {
    // Проверка за валидност на дължината на кодирания низ
    if (encodedStr.length() % 3 != 0) {
        cout<< "Invalid string!\n";
        return;
    }

    // Възстановяване на първоначалните низове
    for (int i = 0; i < encodedStr.length(); i += 3) {
        cout << encodedStr[i];
    }
    cout << endl;
    for (int i = 1; i < encodedStr.length(); i += 3) {
        cout << encodedStr[i];
    }
    cout << endl;
    for (int i = 2; i < encodedStr.length(); i += 3) {
        cout << encodedStr[i];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter length: ";
    cin >> n;

    // Проверка за правилно въведена дължина
    if (n <= 0) {
        cout << "Invalid length.\n";
        return 1;
    }

    // Приемане на трите символни низа
    string str1, str2, str3;
    cout << "String 1: ";
    cin >> str1;
    cout << "String 2: ";
    cin >> str2;
    cout << "String 3: ";
    cin >> str3;

    // Проверка за правилно въведени низове
    if (str1.length() != n || str2.length() != n || str3.length() != n) {
        cout << "Invalid strings.\n";
        return 1;
    }

    // Кодиране на низовете
    string encodedStr = encode(str1, str2, str3);
    cout << "Encoded String: " << encodedStr << endl;

    // Декодиране на кодирания низ и извеждане на първоначалните низове
    cout << "Decoded String:\n";
    decode(encodedStr);

    return 0;
}

