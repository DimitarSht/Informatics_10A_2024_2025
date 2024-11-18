#include <iostream>
#include <cmath>
using namespace std;

// Рекурсивна функция за Skip Search
int skipSearchRecursive(int arr[], int size, int target, int prev, int step) {
    // Ако сме извън границите на масива
    if (prev >= size) return -1;

    // Ако целта е в текущия блок
    if (arr[min(step, size) - 1] >= target) {
        // Линеен скан в текущия блок
        for (int i = prev; i < min(step, size); i++) {
            if (arr[i] == target) return i;
        }
        return -1; // Елементът не е намерен в блока
    }

    // Преминаване към следващия блок
    return skipSearchRecursive(arr, size, target, step, step + sqrt(size));
}

// Обвиваща функция за инициализиране на рекурсията
int skipSearch(int arr[], int size, int target) {
    int step = sqrt(size); // Размер на скока
    return skipSearchRecursive(arr, size, target, 0, step);
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
