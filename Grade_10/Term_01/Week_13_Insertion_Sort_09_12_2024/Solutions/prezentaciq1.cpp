#include <iostream>
using namespace std;

void insertionSort(string arr[], int n) {
    for (int i = 1; i < n; i++) {
        string key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int m;
    cin >> m;
    string words[m];
    for (int i = 0; i < m; i++) {
        cin >> words[i];
    }
    insertionSort(words, m);
    for (int i = 0; i < m; i++) {
        cout << words[i] << endl;
    }
    return 0;
}

