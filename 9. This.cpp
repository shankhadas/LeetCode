#include <bits/stdc++.h>

using namespace std;

/* 
    1. this pointer is used to hold the address of current object.
    2. this pointer is a const pointer.
    3. this pointer is passed as a hidden argument to non-static member function.
    4. Compiler automatically changes all the data members access with this pointer.
    5. this pointer is not passed in static member function.
*/

class Base {
    int x;
public:
    Base() {}
    Base(int a):x{a} {}
    int get() {
        return this->x;
    }
    void set(int a) {
        this->x = a;
    }
};

int main() {
    Base b1;
    Base b2(10);
    cout << b2.get() << endl;
    b2.set(20);
    cout << b2.get() << endl;    

    return 0;
}