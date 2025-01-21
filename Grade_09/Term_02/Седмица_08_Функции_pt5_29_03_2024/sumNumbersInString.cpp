#include <iostream>
#include <string>
using namespace std;

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

int sumOfNumbersInText(string text)
{
    int sum = 0;
    bool inNumber = false;
    int currentNumber = 0;

    // Обхождаме всеки символ от текста
    for (int i = 0; i < text.length(); i++ ) {
        if (isDigit(text[i])) { // Ако символът е цифра
            if (!inNumber) {
                inNumber = true;
                currentNumber = 0;
            }
            currentNumber = currentNumber * 10 + (text[i] - '0');
        } else { // Ако символът не е цифра
            if (inNumber) { // Ако предишните символи бяха част от число
                sum += currentNumber; // Добавяме числото към сумата
                inNumber = false; // Нулираме флага, тъй като не сме в число в момента
            }
        }
    }

    // Проверка за число в края на текста
    if (inNumber) {
        sum += currentNumber;
    }

    return sum;
}

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    cout << "Sum is: " << sumOfNumbersInText(text) << endl;

    return 0;
}

