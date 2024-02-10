#include <iostream>
using namespace std;
int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = 5;

	int min_idx, tmp;

	// Едно по едно местим мястото на края на несортирания подмасив
	for (int i = 0; i < n - 1; i++)
	{
		// Намираме минимума в несортирания подмасив
		min_idx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
		// Разменяме минимума в несортирания масив с първия елемент в него
		if(min_idx != i)
        {
			tmp = arr[min_idx];
			arr[min_idx] = arr[i];
			arr[i] = tmp;
        }
	}

	cout << "Sorted array: \n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
