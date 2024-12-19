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
        int minIndex = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (cards[j] < cards[minIndex])
            {
                minIndex = j;
            }
        }
        swap(cards[i],cards[minIndex]);
    }
    cout << "Podredeni karti: ";
    for (int i = 0; i < 5; i++)
    {
        cout << cards[i] << " ";
    }
    return 0;
}
