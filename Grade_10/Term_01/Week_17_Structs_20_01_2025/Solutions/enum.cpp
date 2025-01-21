#include<iostream>
using namespace std;
enum Player
{
    TANK,   /// 0
    MAGE,   /// 1
    KNIGHT, /// 2
    ARCHER  /// 3
};

int main()
{
    Player p1 = MAGE;
    /// cout<<p1<<endl; /// Принтира 1 - стойността на MAGE в типа за изброяване Player

    switch(p1)
    {
        case TANK:
            cout<<"Player is Tank!"<<endl;
            break;
        case MAGE:
            cout<<"Player is Mage!"<<endl;
            break;
        case KNIGHT:
            cout<<"Player is Knight!"<<endl;
            break;
        case ARCHER:
            cout<<"Player is Archer!"<<endl;
            break;
        default:
            cout<<"Wrong Player Type!"<<endl;
            break;
    }



    return 0;
}
