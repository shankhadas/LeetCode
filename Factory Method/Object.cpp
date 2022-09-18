#include <bits/stdc++.h>
using namespace std;


class Toy {
protected:
    string name;
    int price;
public:
    virtual void prepareParts() = 0;
    virtual void combineParts() = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel() = 0;
    virtual void showProduct() = 0;
};

class Bike : public Toy {
    // make all constructor private or protected
public:
    void prepareParts() { cout << "Prepare Bike parts" << endl; }
    void combineParts() { cout << "Combine Bike parts" << endl; }
    void assembleParts() { cout << "Assemble Bike parts" << endl; }
    void applyLabel() { cout << "Apply Bike Label" << endl; name = "Bike"; price = 10; }
    void showProduct() { cout << "Name: " << name << " Price: " << price << endl; }
};

class Car : public Toy {
    // make all constructor private or protected
public:
    void prepareParts() { cout << "Prepare Car parts" << endl; }
    void combineParts() { cout << "Combine Car parts" << endl; }
    void assembleParts() { cout << "Assemble Car parts" << endl; }
    void applyLabel() { cout << "Apply Car Label" << endl; name = "Car"; price = 20; }
    void showProduct() { cout << "Name: " << name << " Price: " << price << endl; }
};

class Plane : public Toy {
    // make all constructor private or protected
public:
    void prepareParts() { cout << "Prepare Plane parts" << endl; }
    void combineParts() { cout << "Combine Plane parts" << endl; }
    void assembleParts() { cout << "Assemble Plane parts" << endl; }
    void applyLabel() { cout << "Apply Plane Label" << endl; name = "Plane"; price = 30; }
    void showProduct() { cout << "Name: " << name << " Price: " << price << endl; }
};