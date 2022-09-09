#include <bits/stdc++.h>

using namespace std;

/*  
    1. Similar to class except default access specifier is private in class but public for structs.
    2. Default inheritance is private for class but public for structs.
*/

class Base1 {
    int x;
};

struct Base2 {
    int x;
};

int main() {
    Base1 b1;
    b1.x = 10;   // error as x is by default private for class
    
    Base2 b2;
    b2.x = 10;

    return 0;
}

//-----------------------------------------2

class A{};
class B : A{};      // privately inherited as nothing specified, its default behaviour.

struct A{};
struct B : A{};     // publicly inherited vy default if nothing specified.