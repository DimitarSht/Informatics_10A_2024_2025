#include<iostream>
using namespace std;

struct Point
{
    int x, y;
};

struct Triangle
{
    Point points[3];
};


void translate(Point &A)
{
    A.x++;
}

void translate2(Point *A)
{
    A->x++;
}

int main()
{

    return 0;
}
