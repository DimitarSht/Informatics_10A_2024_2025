#include <iostream>
using namespace std;

bool canPartition(int arr[], int n, int k, int subsetSum[], bool taken[], int subsetIdx, int targetSum) {
    if (subsetSum[subsetIdx] == targetSum) {
        if (subsetIdx == k - 2) return true;
        return canPartition(arr, n, k, subsetSum, taken, subsetIdx + 1, targetSum);
    }

    for (int i = 0; i < n; i++) {
        if (!taken[i] && subsetSum[subsetIdx] + arr[i] <= targetSum) {
            taken[i] = true;
            subsetSum[subsetIdx] += arr[i];
            if (canPartition(arr, n, k, subsetSum, taken, subsetIdx, targetSum)) return true;
            taken[i] = false;
            subsetSum[subsetIdx] -= arr[i];
        }
    }

    return false;
}

bool partitionToKSubsets(int arr[], int n, int k) {
    if (k == 0 || n == 0) return false;

    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    if (sum % k != 0) return false;

    int targetSum = sum / k;
    int subsetSum[k] = {0};
    bool taken[n] = {false};

    subsetSum[0] = arr[n - 1];
    taken[n - 1] = true;

    return canPartition(arr, n, k, subsetSum, taken, 0, targetSum);
}

int main() {
    int arr[] = {4, 3, 2, 3, 5, 2, 1};
    int n = 7;
    int k = 4;

    if (partitionToKSubsets(arr, n, k)) {
        cout << "Array can be partitioned into " << k << " subsets with equal sum." << endl;
    } else {
        cout << "Array cannot be partitioned into " << k << " subsets with equal sum." << endl;
    }

    return 0;
}
