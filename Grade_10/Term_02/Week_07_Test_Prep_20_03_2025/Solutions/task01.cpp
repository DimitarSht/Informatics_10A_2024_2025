#include<iostream>
#include<fstream>
using namespace std;
struct Point
{
    char name;
    int x;
    int y;
};
int main()
{
    ifstream in("input.txt");
    if(!in.is_open())
    {
        cout<<"Error";
        return -1;
    }
    int amountPoints;
    in >> amountPoints;

    Point points[amountPoints];
    for(int i = 0; i < amountPoints; i++)
    {
        in >> points[i].name;
        in >> points[i].x;
        in >> points[i].y;
    }
    in.close();

    ofstream out("copy_input.txt");
    if(!out.is_open())
    {
        cout<<"Error";
        return -1;
    }
    out << amountPoints << endl;
    for(int i = 0; i < amountPoints; i++)
    {
        out << points[i].name << " ";
        out << points[i].x << " ";
        out << points[i].y << endl;
    }
    out.close();

    return 0;
}
