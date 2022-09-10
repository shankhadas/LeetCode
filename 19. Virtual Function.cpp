#include <bits/stdc++.h>

using namespace std;

/*  Q. Why to use virtual function?
    A. To achieve dynamic/lazy/runtime polymorphism, the ability to call Derived class function using Base class pointer or reference.
    
    Q. How to use virtual function
    A. 1. declaring function as virtual in Base class and overriding that function in Derived class
            (Function signature must be same in Base and Derived class)
       2. declaring virtual in Base is enough. Derived class function need not to be declared virtual.
       3. should be access using pointer(*) or references(&) of Base class to achieve runtime polymorphism.

    ADDITIONAL NOTES:
    1. virtual function can't be static and can't be friend of another class.
    2. A class can have virtual destructor but can't have virtual constructor.
    3. There're two types of virtual functions
        a. Virtual Function
        b. Pure Virtual Function
*/

class Base {
public:
    virtual void fun() { cout << "Base" << endl; }
    virtual void fun1() = 0; // this is pure virtual function. Also Base become an abstract class and can't create object of Base.
                             // And Derived class must hold the definition of the function.
};

class Derived : public Base {
public:
    void fun() { cout << "Derived" << endl; }
};

int main() {
    Derived d; // can't create object as Base holds a pure virtual function 
    Base b;    // and that inherited to Derived, which makes both the classes as abstract class.

    return 0;
}
