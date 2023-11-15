/*Напишете програма, чрез която да въвеждате размера на
два масива от целочислени числа и след което да се
извеждат общите елементи на масивите.
Пример: 3,5
[1,2,3] [2,3,5,6,7]
Изход: 2,3
*/

#include<iostream>
using namespace std;
int main()
{
    // razmeri
    int size1, size2;
    cin>>size1>>size2;

    // masivi
    int array1[size1], array2[size2];

    // Vavezhdame masivite
    cout<<"Enter first array: ";
    for(int i = 0; i < size1; i++)
    {
        cin>>array1[i];
    }
    cout<<"Enter second array: ";
    for(int i = 0; i < size2; i++)
    {
        cin>>array2[i];
    }

    if(size1 < size2)
    {
        for(int i = 0; i < size1; i++)
        {
            for(int j = 0; j < size2; j++)
            {
                if(array1[i] == array2[j])
                {
                    cout<<array1[i]<<" ";
                }
            }
        }
    }
    else
    {
        /// size1 >= size2
    }



    return 0;
}
