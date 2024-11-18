#include <iostream>
using namespace std;

void findCombinations(int arr[], int n, int target, int index, int comb[], int combSize) {
    if (target == 0) {
        for (int i = 0; i < combSize; i++) {
            cout << comb[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = index; i < n; i++) {
        if (arr[i] <= target) {
            comb[combSize] = arr[i];
            findCombinations(arr, n, target - arr[i], i, comb, combSize + 1); // Allow reuse of the same element
        }
    }
}

int main() {
    int arr[] = {2, 3, 6, 7};
    int n = 4;
    int target = 7;

    int comb[100]; // Temporary array to store current combination
    cout << "Combinations summing to " << target << ":" << endl;
    findCombinations(arr, n, target, 0, comb, 0);

    return 0;
}
