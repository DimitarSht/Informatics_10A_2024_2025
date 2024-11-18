#include <iostream>
using namespace std;
int main()
{
    int x = 20;

    // декларираме указателя
    int* ptr;   /// NULL nullptr

    /// типовете данни и на двете променливи трябва да са еднакви
    ptr = &x;

    // присвояваме адреса на променливата х на указателя ptr
    cout << "Stoinost na ptr = " << ptr << "\n";
    cout << "Stoinost na x = " << x << "\n";
    cout << "Adres na x =  " << &x << "\n";
    cout << "Stoinost na *ptr = " << *ptr << "\n";
return 0;
}
