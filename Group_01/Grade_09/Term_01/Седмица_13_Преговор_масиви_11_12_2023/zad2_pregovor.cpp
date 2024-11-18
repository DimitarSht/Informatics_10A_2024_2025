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
    int sz;
    cin>>sz;
    int arr[sz],p=0,b[sz];
    for(int i = 0; i < sz; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < sz - 1; i++)
    {
        bool povtarqlise=false;
        for(int j = i+1; j < sz; j++)
        {
            if(arr[i] == arr[j])
            {
                povtarqlise=true;
                b[p]=j;
                arr[j]=-1-p;
                p++;
            }
        }
        if(povtarqlise)
        {
            b[p]=i;
            p++;
        }
    }
    for (int i = 0; i < p - 1; i++)
    {
        for (int j = 0; j < p - i - 1; j++)
        {
            if (b[j] > b[j+1])
            {
                swap (b[j], b[j+1]);
            }
        }
    }
    for(int i = 0; i < p; i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}
