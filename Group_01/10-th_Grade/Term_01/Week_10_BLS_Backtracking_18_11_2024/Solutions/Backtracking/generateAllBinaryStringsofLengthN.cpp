#include <iostream>
using namespace std;

void generateBinaryStrings(int n, int arr[], int i) {
    if (i == n) {
        for (int j = 0; j < n; j++) cout << arr[j];
        cout << endl;
        return;
    }

    arr[i] = 0;
    generateBinaryStrings(n, arr, i + 1);

    arr[i] = 1;
    generateBinaryStrings(n, arr, i + 1);
}

int main() {
    int n;
    cout << "Enter the length of binary strings: ";
    cin >> n;

    int arr[n];
    generateBinaryStrings(n, arr, 0);

    return 0;
}
