#include<iostream>
using namespace std;
/*
Задача 3:
Да се напише функция, която приема
сортиран масив и изтрива всички повтарящи
се елементи в него.
Вход: [1 2 2 2 3 4 5 5 6 7]
Изход: [1 3 4 6 7]
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


void removeDuplicates(int arr[], int sz){

    for(int i = 0; i < sz - 1; i++){

        if(arr[i] == arr[i + 1]){

            // Брояч за броя повтарящи се числа
            int count = 0;

            // Броим колко еднакви елемнта има без първия тъй като почваме от него
            for(; count < sz - i - 1; count++)
                if(arr[i + count] != arr[i + count + 1]) break;

            // Добавяме още едно заради първия елемент
            count++;

            // Преместваме елементите напред на мястото на повтарящите се
            for(int k = 0; k < sz - i - 1; k++)
                arr[i + k] = arr[i + k + count];
            
            // Премахваме от sz-а колкото елемента сме изтрили
            sz -= count;

        }

    }

}

void printArrayWithoutDuplicates(int arr[], int sz){

    bool hasDuplicate = false;

    for(int i = 0; i < sz - 1; i++){

        if(arr[i] == arr[i + 1]){

            hasDuplicate = true;
            continue;

        }

        if(!hasDuplicate) cout << arr[i] << ' ';
        hasDuplicate = false;

    }

    if(!hasDuplicate) cout << arr[sz - 1];
    cout << '\n';

}

int main(){

    int sz = 10;
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 5, 6, 7};

    printArrayWithoutDuplicates(arr, sz);

    removeDuplicates(arr, sz);

    cout << sz << '\n';

    for(int i = 0; i < sz; i++) cout << arr[i] << ' ';
    cout << '\n';

    /// защо принтира такива неща ще разберем след априлската ваканция
    return 0;
}