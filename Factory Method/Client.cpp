#include <bits/stdc++.h>
using namespace std;

#include "ToyFactory.cpp"

int main() {
    // Client code starts
    int type;
    while(1){
        cout << "Enter type or zero for exit" << endl;
        cin >> type;
        if(!type) 
            break;
        Toy *t = FactoryMethod :: createToy(type);
        if(t){
            t->showProduct();
            delete t;
        }
    }
    cout << "Exit" << endl;
    // Client code ends

    return 0;
}