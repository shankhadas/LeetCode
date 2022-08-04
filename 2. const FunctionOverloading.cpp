#include <bits/stdc++.h>

using namespace std;

/*
    1. C++ allows to overload member function on the basis of const and non-const.
    2. const parameters allows to overload member functions and normal function but it's be pointer/reference.
*/

class Test{
        int x;
    public:
        Test(int x=0):x{x} {}
        // void print(int val) { cout << val << endl; }         // invalid : both func() are same
        // void print(const int val) { cout << val << endl; }

        void print(int& val) { cout << val << endl; }           // 1. valid : call by reference
        void print(const int& val) { cout << val << endl; }

        void print(int* val) { cout << *val << endl; }          // 2. valid : call by pointer
        void print(const int* val) { cout << *val << endl; }
};

int main() {
    Test t;
    int k = 10;
    const int p = 20;

    t.print(k); // 1
    t.print(p);

    t.print(&k); // 2
    t.print(&p);

    return 0;
}