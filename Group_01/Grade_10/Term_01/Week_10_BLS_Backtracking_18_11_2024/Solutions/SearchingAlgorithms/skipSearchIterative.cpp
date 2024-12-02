#include <iostream>
#include <cmath>
using namespace std;

int skipSearch(int arr[], int size, int target) {
    // Изчисляваме размера на скока
    int step = sqrt(size);
    int prev = 0;

    // Търсим блока, където може да се намира елементът
    while (arr[min(step, size) - 1] < target) {
        prev = step;
        step += sqrt(size);
        if (prev >= size) return -1; // Елементът не съществува
    }

    // Линеен скан в намерения блок
    for (int i = prev; i < min(step, size); i++) {
        if (arr[i] == target) return i;
    }

    return -1; // Елементът не е намерен
}

int main() {
    // Примерен масив
    int size = 10;
    int arr[size] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    
    // Търсене на елемент
    int target = 15;
    int result = skipSearch(arr, size, target);

    if (result != -1) {
        cout << "Елементът е намерен на индекс " << result << ".\n";
    } else {
        cout << "Елементът не е намерен.\n";
    }

    return 0;
}
