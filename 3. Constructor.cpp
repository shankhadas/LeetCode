#include <bits/stdc++.h>

using namespace std;

/*
    1. Similar to class name.
    2. Automatic call when we create an object of the class.
    3. No return type.
    4. If not given by user then compiler will generate it by itself.

    Types:
    1. Default      2. Parameterized        3. Copy
*/

class Point{
        double x, y;
    public:
        Point() {x=0, y=0; cout << "default" << endl;}
        Point(double X, double Y) {x=X, y=Y; cout << "parameterized" << endl;}
        Point(const Point& rhs) {x=rhs.x, y=rhs.y; cout << "copy" << endl;}

        // getters
        double getX() {return x;}
        double getY() {return y;}
};

int main() {
    Point p1;
    Point p2(3.5, 2.5);
    Point p3 = p1;

    cout << p2.getX() <<endl;
    cout << p2.getY() <<endl;

    return 0;
}