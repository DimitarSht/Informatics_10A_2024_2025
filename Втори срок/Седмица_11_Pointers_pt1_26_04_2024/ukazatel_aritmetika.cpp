#include<iostream>
using namespace std;
int main()
{
    int v[3] = { 10, 100, 200 };

    // декларираме указател
    int* ptr;

    // Присвояване на адреса на v[0] към ptr
    ptr = v;

    for (int i = 0; i < 3; i++)
    {
        cout << "Value at ptr = " << ptr << "\n";
        cout << "Value at *ptr = " << *ptr << "\n";

        // Увеличаваме указателя ptr с 1, тоест ptr сочи следващата клетка в паметта
        ptr++;
    }
    return 0;
}
