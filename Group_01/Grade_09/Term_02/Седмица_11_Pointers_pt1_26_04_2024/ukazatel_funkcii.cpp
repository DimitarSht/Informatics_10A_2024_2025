#include <iostream>
using namespace std;

// Подаване по стойност
int square1(int n)
{
    // Адресът на n във squarel() не е същият като този на n1 в main функцията
    cout << "address of n1 in square1(): " << &n << "\n";

    // Копираме n вътре във функцията
    n *= n;
    return n;
}
// Подаване по референция с параметър
void square2(int* n)
{
    // Адресът на n в square2() е същият като този на n2 в main()
    cout << "address of n2 in square2(): " << n << "\n";

    // Експлицитно дереференсираме *n, за да получим стойността, към която указателят сочи
    *n *= *n;
}
// Подаване по референция с адресен оператор
void square3(int& n)
{
    // Адресът на n в square3() е същият като този на n3 в main()
    cout << "address of n3 in square3(): " << &n << "\n";

    // Имплицитно де-референсираме (не използваме '*')
    n *= n;
}

int main()
{
    // Подаване по стойност
    int n1 = 8;
    cout << "address of n1 in main(): " << &n1 << "\n";
    cout << "Square of n1: " << square1(n1) << "\n";
    cout << "No change in n1: " << n1 << "\n";

    // Подаване по референция с параметър
    int n2 = 8;
    cout << "address of n2 in main(): " << &n2 << "\n";
    square2(&n2);
    cout << "Square of n2: " << n2 << "\n";
    cout << "Change reflected in n2: " << n2 << "\n";

    // Подаване по референция с адресен оператор
    int n3 = 8;
    cout << "address of n3 in main(): " << &n3 << "\n";
    square3(n3);
    cout << "Square of n3: " << n3 << "\n";
    cout << "Change reflected in n3: " << n3 << "\n";

    return 0;
}
