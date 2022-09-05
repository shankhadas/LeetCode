#include <bits/stdc++.h>

using namespace std;

/* NOTES: WHEN CAN WE USE REFERENCE DATA MEMBERS
    1. When you're OK with your data member can be updated without knowledge. Breaking encapsulation.
    2. When you don't need to implement assignment operator in your class (this is restriction)
    3. Need to ensure that the referred object is guranteed to exist till class object exists.
*/

class Base {
    int &x; // private member but still can be updated as it's referrenced
public:
    Base () {} // Can't have default constructor as the data member is referenced
    Base(int& a):x{a} {} // &(reference) is important here
    void print() { cout << x << endl; }
};

int main() {
    int val = 10;
    Base b(val);
    b.print();

    val = 20;     // 1.
    b.print();

    int* val1 = new int(11);    // 3.
    Base b1(*val1);
    b1.print();
    delete val1;
    b1.print();

    return 0;
}