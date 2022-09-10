#include <bits/stdc++.h>

using namespace std;

/*  TOPIC: Make class non-inheritable without using final keyword.

    REQUIREMENT: Need a class which will make the class as final class. Let's call in Final class.
    SOLUTION:
    1. make default constructor of Final class as private.
    2. inherit Final class as virtual which we want to make non-inheritable.
    3. make our class as friend inside Final class. 
        (so that only our class can call the constructor of Final class, not the derived class)
*/

class Final {
private:
    Final() {}         //1
    friend class Base; //3
};

class Base : virtual public Final { //2   // we don't want Base to be derived in the Derived class
public:                                   // as virtual keyword is present so Derived class won't be able to call Final class constructor using Base class, that's why virtual keyword is important.
    Base() {}
};

class Derived : public Base {   // we want to restrict inheritance here
public:
    Derived() {}
};

int main() {
    Derived d;
    
    return 0;
}

/*
       class Final

       class Base : public Final // class Base : virtual public Final

       class Derived : public Base

       Derived d                 will call Base constructor and Base will call Final constructor but                       // happens for non-virtual inheritance
       if 'virtual public' is present then Derived d will call Base constructor and Derived d will call Final constructor  // happens for virtual inheritance
       but Final constructor is private so it won't be able to call it.
*/