#include <iostream>
using namespace std;
int main()
{
     // Декларираме масива
    int value[3] = { 5, 10, 20 };

    // Декларираме указател ptr
    int* ptr;

    // Присвояване на адреса на value[0] към ptr
    // Можем да използваме ptr=&value[0];(еднакви са)
    ptr = value;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2]<<endl;
    cout << ptr <<" "<< *ptr;
    return 0;
}
