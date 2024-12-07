#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void merge(int arr[], int left, int mid, int right) {
	int razmer1 = mid - left + 1; // размер на първия подмасив
	int razmer2 = right - mid;
	int arrL[30];
	int arrR[30]; // временни подмасиви
	for (int i = 0; i < razmer1; i++) {
		arrL[i] = arr[left + i];
	}
	for (int j = 0; j < razmer2; j++) {
		arrR[j] = arr[mid + 1 + j];
	}
	int i = 0, j = 0, k = left; // i за движаение нпо arrL, j за движение по arrR, k за движение по главния масив
	// сливане на подмасивите в основния
	while (i < razmer1 && j < razmer2) {
		if (arrL[i] <= arrR[j]) {
			arr[k] = arrL[i];
			i++;
		}
		else {
			arr[k] = arrR[j];
			j++;
		}
		k++;
	}
	while (i < razmer1) {
		arr[k] = arrL[i]; i++; k++;
	}
	while (j < razmer2) {
		arr[k] = arrR[j]; j++; k++;
	}
}
void mergesort(int arr[], int left, int right) {
	if (left >= right) return;
	int mid = left + (right - left) / 2;
	mergesort(arr, left, mid);
	mergesort(arr, mid + 1, right);
	merge(arr, left, mid, right);
}
int main() {
	int n; cin >> n;
	int arr[20];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	mergesort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
