#include <bits/stdc++.h>

using namespace std;

/*  
    1. Default constructor of Base class is called automatically. (if we don't call)
    2. But if we want to call parameterized constructor then we've to call explicitly.
*/

class Base {
    int x;
public:
    Base() { cout << "Base Default" << endl; }
    Base(int a):x{a} { cout << "Base Parameterized" << endl; }
};

class Derived : public Base {
    int y;
public:
    Derived() { cout << "Derived Default" << endl; }
    Derived(int b, int c):Base(b),y{c}  { cout << "Derived Parameterized" << endl; } // here Base(b) will be called Base parameterized constructor
};

int main() {
    Derived d1(1, 2);
    Derived d2;

    return 0;
}
