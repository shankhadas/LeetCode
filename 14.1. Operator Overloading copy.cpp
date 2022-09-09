#include <bits/stdc++.h>

using namespace std;

/*  
    1. In C++ its possible to change the behaviour of operators (+, -, *, / ...)
    2. Operator overloading facilitates the specification of user-defined implementation for operations wherein one or both operands are of user-defined class or structure type.
    3. This helps user-defined types to behave much like the fundamental primitive data types.
    4. Operators can't be overloaded:
        1. ::
        2. ?:
        3. .
        4. .*
        5. sizeof
        6. typeid
*/

class Point {
    int x;
    int y;
public:
    Point() {}
    Point(int a, int b):x{a}, y{b} {}
    Point operator + (const Point& rhs ) {      // syatax to write the operator overloading function.
        Point p;
        p.x = x + rhs.x;
        p.y = y + rhs.y;
        return p;
    }

    Point add (const Point& rhs ) {      // syatax to write the operator overloading function.
        Point p;
        p.x = x + rhs.x;
        p.y = y + rhs.y;
        return p;
    }

    void print() {
        cout << "x: " << x << " y: " << y <<endl;
    }
};

int main() {
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 + p2;
        //Point p3 = p1.operator::+(p2)     -> internally compiler changes the above line to this line likely not exactly.
    p3.print();

    Point p4 = p1.add(p2);      //another way to rewrite line no. 45
    p4.print();

    return 0;
}