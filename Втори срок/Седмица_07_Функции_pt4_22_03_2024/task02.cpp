#include<iostream>
using namespace std;
/*
Задача 2:
Да се напише функция, която приема 2 масива и
връща броят на еднаквите им
елементи. Не разглеждаме повторения,
търсим само дали има еднакви елементи!
Вход: [1 2 3 4 5 6 7 8 9]
[14 67 23 4 92 6 10 2 48 5 19 4]
Изход: 4
*/
void inputArr(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }
}

void outputArr(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int countEqual(int arr1[], int sz1, int arr2[], int sz2)
{
    int counter = 0;
    for(int i = 0; i < sz1; i++)
    {
        for(int j = 0; j < sz2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                counter++;
                break;
            }
        }
    }
    return counter;
}

int main()
{
    int sz1, sz2;
    cin>>sz1>>sz2;
    int arr1[sz1], arr2[sz2];
    inputArr(arr1, sz1);
    inputArr(arr2, sz2);
    cout<<"Equal elements: "<<countEqual(arr1, sz1, arr2, sz2);
    return 0;
}
