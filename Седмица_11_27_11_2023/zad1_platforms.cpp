#include<iostream>
using namespace std;
/*
Ще наричаме площадка непрекъсната последователност от елементи
с равни стойности. Да се състави програма на C++, която
проверява коя е най-дългата площадка в предварително въведен
масив от естествени числа от интервала [0 - 5000].
Програмата да извежда най-дългата площадка в масива и броят на площадките.
Вход:
1 3 3 7 9 9 9 9 11 11 12 14
Изход:
Longest platform: 4 elements
Number of platforms: 3
*/
int main()
{
    int sz, min_idx = 0;
    cin>>sz;
    int arr[sz];
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }

    /// Сортиране по пряката селекция (selection sort)
    for (int i = 0; i < sz - 1; i++)
    {
        // Намираме минимума в несортирания подмасив
        min_idx = i;
        for(int j = i + 1; j < sz; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // Разменяме минимума в несортирания масив с първия елемент в него
        if(min_idx != i)
        {
            swap(arr[min_idx], arr[i]);
        }
    }

    int MAXLength = 1;
    int currPlatformLength = 1;
    int counterPlatforms = 0;
    for(int i = 0; i < sz; i++)
    {
        if(arr[i] == arr[i+1])
        {
            currPlatformLength++;
        }
        else
        {
            if(currPlatformLength > MAXLength)
            {
                MAXLength = currPlatformLength;
                currPlatformLength = 1;
                //cout<<MAXLength<<endl;
            }
        }
    }
    for(int i = 0; i < sz; i++)
    {
        if(arr[i] == arr[i+1])
        {
            currPlatformLength++;
        }
        else
        {
            if(currPlatformLength > 1)
            {
                counterPlatforms++;
                currPlatformLength = 1;
            }
        }
    }

    cout<<MAXLength<<" "<<counterPlatforms;

    return 0;
}
