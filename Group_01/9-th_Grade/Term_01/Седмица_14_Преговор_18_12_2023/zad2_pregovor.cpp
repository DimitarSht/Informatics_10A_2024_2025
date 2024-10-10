#include<iostream>
using namespace std;
/*
Да се състави програма, която въвежда редица от N
естествени числа от интервала [0, 5000].
Програмата да проверява за равни
стойности на елементи от редицата,
като извежда индекса (позицията в масива)
на всички равни стойности.
Пример:
Вход: 					Изход:
1, 2, 3, 4, 5, 4, 6		3, 5  //защото броим от 0
*/
int main()
{
    int sz, povtarqSe;
    cin>>sz;
    int arr[sz];
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < sz; i++)
    {
        for(int j = i + 1; j < sz; j++)
        {
            if(arr[i] == arr[j])
            {
                povtarqSe = arr[i];
            }
        }
    }
    for(int i = 0; i < sz; i++)
    {
        if(arr[i] == povtarqSe)
        {
            cout<<i+1<<" ";
        }
    }




    return 0;
}
