#include <bits/stdc++.h>

using namespace std;

/*  // Constant Member Function
    1. This is used to restrict modification of data members inside function.
    2. When a function is declared as const, it can be called on any type of object. 
    3. Non-const functions can only be called by non-const objects.
    4. const object can only call const functions.
    5. mutable keyword can update const data members.
*/

class Base {
    int x;      // mutable int x;
public:
    Base() {}
    Base(int a):x{a} {}
    void setX(int a) { x=a; }
    int getX() const { x = 20; return x; } // error as it's trying to update x being a const method but if mutable is added then it's good.
};

int main() {
    Base b(10);   
    b.setX(20); 
    cout << b.getX() << endl;

    return 0;
}
//----------------------------------------------------------
class Test {
    int value;
public:
    Test(int v = 0) {value = v;}
    int getValue() {return value;}
};
 
int main() {
    const Test t;
    cout << t.getValue();   // error as t is const object and calling non const function 'getValue'. 
    return 0;
} 
//----------------------------------------------------------4
class Demo {
    int value;
public:
    Demo(int v = 0) {value = v;}
    void showMessage(){
        cout<<"Hello"<<endl;
    }
    void display()const{
        cout<<"Hi"<<endl;
    }
};
int main() {
    const Demo d1;          //Constant object are initialised at the time of declaration using constructor.
    //d1.showMessage();     //Error occurred if uncomment because const object calling non const method.
    d1.display();           // no error as const object calling const method.
    return(0);
}