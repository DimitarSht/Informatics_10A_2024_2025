#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, bool ascending) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        if (ascending) {
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
        } else {
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j--;
            }
        }
        arr[j + 1] = key;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n], even[n], odd[n], evenSize = 0, oddSize = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) even[evenSize++] = arr[i];
        else odd[oddSize++] = arr[i];
    }
    insertionSort(even, evenSize, true);
    insertionSort(odd, oddSize, false);
    for (int i = 0; i < evenSize; i++) {
        cout << even[i] << " ";
    }
    for (int i = 0; i < oddSize; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;
    return 0;
}
