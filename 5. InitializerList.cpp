#include <bits/stdc++.h>

using namespace std;

/*
    CONSTRUCTORS & MEMBER INITIALIZER LISTS C++

    -> This is used to initialize data members of classes.
        Two ways to do this
    1. Using {} this is uniform initialization and preffered
    2. Using ()
*/

class Base {
    int x;
public:
    Base(int a) { x = a; }

    Base(int a):x{a} {}
    Base(int a):x(a) {}
    // better to use {} instead of () as {} will throw warning
    // used for narrowing and {} will give an error

};

int main() {
    Base b(10);

    return 0;
}