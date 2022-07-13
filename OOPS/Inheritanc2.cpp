#include <bits/stdc++.h>
using namespace std;

class Rectangle
{ // this is heirarchical inheritance
public:
    int l, b;
    Rectangle(int c)
    {
        cout << c << endl;
    }
    void get_lb(int n, int m)
    {
        l = m;
        b = n;
    }
};

class Area : public Rectangle
{
public:
    Area() : Rectangle(3)
    {
        cout << "Area construtor \n";
    }
    int getArea()
    {
        return l * b;
    }
};
class perimeter : public Rectangle
{
public:
    perimeter() : Rectangle(4)
    {
        cout << "Perimeter constructor called " << endl;
    }
    int getP()
    {
        return 2 * (l + b);
    }
};

int main()
{

    perimeter r1;
    Area a1;
    a1.get_lb(6, 3);
    cout << a1.getArea() << endl;
    r1.get_lb(5, 4);
    cout << r1.getP() << " ";

    return 0;
}