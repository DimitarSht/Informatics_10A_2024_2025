#include<iostream>
using namespace std;
int main()
{
    /// Декларираме си размера на масива
    int sz, sum = 0, prod = 1;
    cout<<"Enter sz: ";
    cin>>sz;
    /// Декларираме масива
    int array[sz];
    cout<<"Enter array: ";
    /// Въвеждаме елементи на масива
    for(int i = 0; i < sz; i++)
    {
        cin>>array[i];
        sum = sum + array[i];
        prod = prod * array[i];
    }

    /// Извеждане на масива на конзолата
    cout<<"Array is: ";
    for(int i = 1; i < sz; i = i + 2)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Sum of elements: "<<sum<<endl;
    cout<<"Product of elements: "<<prod<<endl;
return 0;
}
