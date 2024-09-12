#include<iostream>
using namespace std;
/*
Въвеждаме си два масива и да го обединим.
След това да сортираме в низходящ ред обединението.
Различните елементи по колко пъти се съдържат в масива
*/
int main()
{
    int sz1, sz2;
    cin>>sz1>>sz2;
    int szCombined = sz1 + sz2;
    int arr1[sz1], arr2[sz2], arrCombined[szCombined];
    for(int i = 0; i < sz1; i++)
    {
        cin>>arr1[i];
    }
    for(int i = 0; i < sz2; i++)
    {
        cin>>arr2[i];
    }
    for(int i = 0; i < szCombined; i++)
    {
        if(i < sz1)
        {
            arrCombined[i] = arr1[i];
        }
        else
        {
            arrCombined[i] = arr2[i - sz1];
        }
    }
    for(int i = 0; i < szCombined - 1; i++)
    {
        for(int j = 0; j < szCombined - i - 1; j++)
        {
            if(arrCombined[j] < arrCombined[j + 1])
            {
                swap(arrCombined[j], arrCombined[j+1]);
            }
        }
    }

    for(int i = 0; i < szCombined; i++)
    {
        cout<<arrCombined[i]<<" ";
    }
    cout<<endl;
    int counter = 1;
    for(int i = 0; i < szCombined; i++)
    {
        for(int j = i + 1; j < szCombined; j++)
        {
            if(arrCombined[i] == arrCombined[j])
            {
                counter++;
            }
        }
    }



    return 0;
}
