#include <bits/stdc++.h>

using namespace std;

/* 
    1. friend is used to make some [function / class] as friend of the class.
    2. friend [function / class] can access provate/protected/public member of the class.
    3. function can not become friend of another function.
    4. class can not become friend of function.
    5. friendship isn't mutual. If class A is friend of class B, then B doesn't become friend of A automatically.
    6. friendship isn't inherited.
*/


class Base {
    int x;
public:
    Base() {}
    Base(int a):x{a} {}
    friend void sett(Base&, int);
    friend int get(Base&);
};
void sett(Base& obj, int a){
    obj.x = a;
}
int get(Base& obj) {
    return obj.x;
}

int main() {
    Base b(10);   
    cout << get(b) << endl;
    sett(b, 20);
    cout << get(b) << endl;

    return 0;
}


class Base {
    int x;
public:
    Base() {}
    Base(int a):x{a} {}
    friend class GetSet;
};

class GetSet {
public:
    void set(Base& obj, int a) { obj.x = a; }
    int get(Base& obj) { return obj.x; }
};

int main() {
    Base b(10);   
    GetSet gs;
    cout << gs.get(b) << endl;
    gs.set(b, 20);
    cout << gs.get(b) << endl;

    return 0;
}