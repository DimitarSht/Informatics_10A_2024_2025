#include <iostream>
using namespace std;

void printSubset(int subset[], int size)
{
    cout << "{ ";
    for (int i = 0; i < size; i++)
    {
        cout << subset[i];
        if (i < size - 1)
        {
            cout << ", ";
        }
        else
            cout << "";
    }
    cout << " }" << endl;
}

void findSubsets(int arr[], int n, int sum, int subset[], int subsetSize)
{
    if (sum == 0)
    {
        printSubset(subset, subsetSize);
        return;
    }

    if (n == 0)
        return;

    // Махаме последния елемент на arr и преминаваме към следващо подмножество
    findSubsets(arr, n - 1, sum, subset, subsetSize);

    // Добавяме последния елемент на arr към масива, съхраняващ текущото подмножество, и намаляваме
    // търсената сума
    subset[subsetSize] = arr[n - 1];
    findSubsets(arr, n - 1, sum - arr[n - 1], subset, subsetSize + 1);
}

bool subsetSum(int arr[], int n, int sum)
{
    int subset[100]; // Масив, в който съхраняваме елементите на текущото подмножество
    findSubsets(arr, n, sum, subset, 0);
    return false;
}

int main()
{
    int arr[] = {3, 34, 4, 12, 5, 2};
    int n = 6;
    int subset[n];
    int targetSum = 9;

    cout << "Subsets with sum " << targetSum << ":" << endl;
    // Ще решим задачата, като обходим arr отзад напред и добавяме всеки текущ елемент
    // към подмножество, чиято сума на елементите проверяваме
    findSubsets(arr, n, targetSum, subset, 0);

    return 0;
}
