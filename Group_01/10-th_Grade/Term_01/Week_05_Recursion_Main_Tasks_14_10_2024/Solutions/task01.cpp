#include<iostream>
using namespace std;
// Сума на числа в интервал
void func(int start, int End, int sum)
{
    if(start == End)
    {
        cout<<sum<<endl;
        return;
    }
    sum += start;
    start++;
    func(start, End, sum);
}
int main()
{
    for(int i = start; i <= End; i++)
    {
        sum += i;
    }
    cout<<sum;
    return 0;
}
