#include<iostream>
using namespace std;
int main()
{
    int counter = 0;
    for(int i = 102; i <= 999; i++){
        int first = i / 100;
        int second = i / 10 % 10;
        int third = i % 10;
        if(first != second && first != third && second != third)
        {
            counter++;
        }
    }
    cout<<counter;
return 0;
}
