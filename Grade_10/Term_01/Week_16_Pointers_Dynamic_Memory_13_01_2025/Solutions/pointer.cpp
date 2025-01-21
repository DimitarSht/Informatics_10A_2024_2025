#include <iostream>
using namespace std;
/// Задача 00
void print(int *begin, int *end)
{
    while (begin < end)
    {
        cout << *begin << " ";
        begin++;
    }
}

/// Задача 01
int *upperBound(int *begin, int *end, int element)
{
    while (begin < end)
    {
        if (*begin == element)
        {
            return ++begin;
        }
        begin++;
    }
    return nullptr;
}

/// Задача 02
bool equal(int *firstBegin, int *firstEnd, int *secondBegin, int *secondEnd)
{
    bool areEqual = false;
    for (int *i = firstBegin, *j = secondBegin;
         i < firstEnd && j < secondEnd;
         i++, j++)
    {
        if (*i == *j)
        {
            areEqual = true;
        }
        else
            break;
    }
    return areEqual;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int *arr2 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    print(arr, arr + n);
    cout << endl;
    int *ptr = upperBound(arr, arr + n, 4);

    if (!ptr)
    {
        cout << "Nqma takova chislo" << endl;
    }
    else
    {
        cout << ptr << " " << *ptr << endl;
    }

    cout << boolalpha << equal(arr, arr + n, arr2, arr2 + n);

    delete arr;
    delete arr2;

    return 0;
}
