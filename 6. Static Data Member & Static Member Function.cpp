#include <bits/stdc++.h>

using namespace std;

class Base {

public:
    int x;
    static int y; // static data members are same for every object;

    void printX() { cout << x << endl; } // non-static member func can access both static & non-static member.
    static void printY() { cout << y << endl; } // static func can only access ststic data members.
};

int Base::y;

int main() {
    Base b1;
    b1.x = 10;
    b1.y = 40; 
    Base::y = 40;

    Base b2;
    b2.x = 20;
    b2.y = 50;
    Base::y = 50;

    cout << b1.x << endl;
    cout << b1.y << endl;

    cout << b2.x << endl;
    cout << b2.y << endl;

    b1.printX();
    b1.printY();
    Base::printY();

    b2.printX();
    b2.printY();
    Base::printY();

    return 0;
}