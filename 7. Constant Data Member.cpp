#include <bits/stdc++.h>

using namespace std;

/*
    constant data member can't be changed once initalized
    Two way of intializing
    1. Initialize in class
    2. initializer list is used to initialize outside class
*/
    // 1
class Circle {
    const int pi = 3.14;
    float r;
public:
    // Circle(float a){ r = a; }
    Circle(float a):r{a} {}
    float getArea() { return r*r*pi; }
};

int main() {
    Circle c1(5.1), c2(10);
    cout << c1.getArea() << endl;
    cout << c2.getArea() << endl;

    return 0;
}

    // 2
class Phone {
    const string pname; // as it is const so once intialized can't be changed
public:
    Phone(string str):pname{str} {}
    string getPhoneName() { return pname; }
};

int main() {
    Phone p1("MOTO G"), p2("iPhone");
    cout << p1.getPhoneName() << endl;
    cout << p2.getPhoneName() << endl;

    return 0;
}