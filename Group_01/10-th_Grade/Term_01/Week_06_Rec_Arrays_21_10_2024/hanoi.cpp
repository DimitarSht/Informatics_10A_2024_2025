#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char aux, char to)
{
    if(n == 1)
    {
        cout<<"Moving 1 from "<<from<<" to "<<to<<endl;
        return;
    }
    towerOfHanoi(n-1, from, aux, to);
    cout<<"Moving "<<n<<" from "<<from<<" to "<<aux<<endl;
    towerOfHanoi(n-1, aux, to, from);
}
/*
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from_rod
                << " to rod " << to_rod << endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}*/
int main() {
    int n = 4;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}







/*
*/
