#include<iostream>
using namespace std;
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



    return 0;
}
