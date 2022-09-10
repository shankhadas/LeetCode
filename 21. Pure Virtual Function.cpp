#include <bits/stdc++.h>

using namespace std;

/*  
    1. If some class can have only signature of the function not the body then we use pure virtual function.
    2. Sometimes in Base class we know the function name not the definition so Derived class need to provide the body.
    3. We can give actually give the body of pure virtual function.
    4. If we have pure virtual function in the class then it becomes an Abstract class and object can't be created of that class.
       (But pointer or reference can be created)

    5. Mainly used to create abstract class, which helps to create interfaces (APIs)
*/

class Animal {
public:
    virtual void move() = 0;
};

void Animal::move() {           //3 this can be useful for common functionality
    cout << "Animal" << endl;
}

class Cow : public Animal {
public:
    void move() { 
        Animal::move();
        cout << "walk & run" << endl; 
    }
};

class Snake : public Animal {
public:
    void move() { cout << "reclitinier locomotion" << endl; }
};

int main() {
    Cow c;
    c.move();

    return 0;
}
