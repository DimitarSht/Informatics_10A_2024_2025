#include<iostream>
#include<string>
using namespace std;
void permute(string str, int l, int r)
{
    if(l == r) cout<<str<<endl;
    for (int i = l; i <= r; ++i)
    {
        swap(str[l], str[i]);
        permute(str, l + 1, r);
        swap(str[l], str[i]);
    }

}
int main()
{
    permute("ABC", 0, 2);
    return 0;
}

