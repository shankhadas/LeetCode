#include <bits/stdc++.h>

using namespace std;

/*  Two types of Polymorphism
    1. Compile Time Polymorphism / Static Binding / Early Binding
        i.  Function Overloading
        ii. Operator Overloading
    2. Runtime Polymorphism / Dynamic Binding / Lazy Binding
        i. Function Overriding (using virtual function)
*/

class Base {
public:
    virtual void fun() { cout << "Base" << endl; }
};

class Derived : public Base {
public:
    // void fun() { cout << "Derived" << endl; }
    void fun() override { cout << "Derived" << endl; }  // if you're intent to make a function overried then add the keyword
                                                        // void fun() override { cout << "Derived" << endl; }
};

int main() {
    Base *b = new Derived();
    b->fun();

    Derived d;
    Base &b1 = d;
    b1.fun();

    return 0;
}
