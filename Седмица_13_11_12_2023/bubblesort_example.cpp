#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];

    // For цикъл за въвеждане на елементите на масива
    for(int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    // Метод на мехурчето (bubble sort) за сортиране на масива arr
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
                /*tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;*/
            }
        }
    }

    cout << "Sorted array: \n";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}
