#include <bits/stdc++.h>

using namespace std;

/*
    1. Special member function with same name as class with ~ at front.
    2. Used to destruct the memory of object which was created by constructor.
    3. Destructors get called automatically (implicit call), as constructor was. 
    4. We can call destructors explicitly but that's not a good practice.
    5. The only place where destructor can be called is after placement of new.
*/

class Base {
    int x;
public:
    Base() { cout << "D constructor" << endl; }
    Base(int a):x{a} { cout << "P constructor" << endl; }
    ~Base() {
        cout << "Destructor" << endl;
    }
};

int main() {
    Base b;

    return 0;
}