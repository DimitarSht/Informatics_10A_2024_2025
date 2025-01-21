#include <iostream>
using namespace std;
/// Дефинираме си тип Marker, който ще описва какви характеристики има един маркер
struct Marker
{
    double price;
    bool isDefected;
    bool isPermanent;
    string brand;
    string color;
    string typeOfNib;
};

int main()
{
    Marker m1;  /// Създава ни обект с име m1 от тип Marker

    /// Достъпваме всяка една член-данна чрез оператор "."
    cin >> m1.brand >> m1.color >> m1.price; /// Въвеждаме стойности на член-данните brand, color, price
    

    /// Извеждаме стойностите на член-данните brand, color, price
    cout << m1.brand << " " << m1.color << " " << m1.price;

    return 0;
}
