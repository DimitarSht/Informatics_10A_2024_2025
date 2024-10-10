#include <iostream>
using namespace std;
const int MAX_SIZE = 256; // Брой ASCII символи

void sortCharArr(int charCount[MAX_SIZE], char input[MAX_SIZE])
{
    // Изчисляване на броя на всяка ASCII стойност
    for (int i = 0; input[i] != '\0'; ++i) {
        charCount[input[i]]++;
    }

    // Извеждане на символите според техния брой
    cout << "Sorted array: ";
    for (int i = 0; i < MAX_SIZE; ++i) {
        while (charCount[i] > 0) {
            cout << char(i);
            charCount[i]--;
        }
    }
    cout << endl;
}

int main() {
     
    int charCount[MAX_SIZE] = {0}; // Брояч за всяка ASCII стойност
    char input[MAX_SIZE]; // Масив за съхранение на входния низ

    // Приемане на входния низ
    cout << "Въведете символен низ: ";
    cin.getline(input, MAX_SIZE);

    sortCharArr(charCount, input);
    
    return 0;
}
