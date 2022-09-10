#include <bits/stdc++.h>

using namespace std;

/*  
    1. If we delete child class object through a pointer of parent class then it is undefined behaviour, if parent class doesn't have virtual destructor.
    2. If we fail to declare destructor as virtual in parent class then we end up having memory leak.
*/

class Base {
public:
    Base() { cout << "C - Base" << endl; }
    virtual ~Base() { cout << "D - Base" << endl; }     // if virtual not mentioned then by delete keyword Derived object isn't destructed, so virtual keyword necessary.
};

class Derived : public Base {
public:
    Derived() { cout << "C - Derived" << endl; }
    ~Derived() { cout << "D - Derived" << endl; }
};

int main() {
    Base *b = new Derived();
    delete b;
    
    // Derived d;


    return 0;
}
