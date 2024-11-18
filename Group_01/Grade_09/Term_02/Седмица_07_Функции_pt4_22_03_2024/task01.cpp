#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
double side(int x1, int y1, int x2, int y2){
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main()
{
    pair<int, int>p1;
    cin>>p1.first;
    cin>>p1.second;

    pair<int, int>p2;
    cin>>p2.first;
    cin>>p2.second;

    pair<int, int>p3;
    cin>>p3.first;
    cin>>p3.second;

    double a = side(p1.first, p1.second, p2.first, p2.second);
    double b = side(p3.first, p3.second, p2.first, p2.second);
    double c = side(p1.first, p1.second, p3.first, p3.second);
    cout<<a+b+c;
    return 0;
}
