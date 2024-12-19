#include <iostream>
using namespace std;
int main()
{
    int cards[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> cards[i];
    }
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (cards[j] > cards[j + 1])
            {
                swap(cards[j],cards[j + 1]);
            }
        }
    }
    cout << "Podredeni karti: ";
    for (int i = 0; i < 5; i++)
    {
        cout << cards[i] << " ";
    }
    return 0;
}
