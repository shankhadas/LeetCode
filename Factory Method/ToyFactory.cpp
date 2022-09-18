#include <bits/stdc++.h>
using namespace std;

#include "Object.cpp"

class FactoryMethod {
public:
    static Toy* createToy(int type){    // FactoryMethod
        Toy *toy = NULL;
        switch (type){
            case 1:{
                toy = new Bike;
                break;
            }
            case 2:{
                toy = new Car;
                break;
            }
            case 3:{
                toy = new Plane;
                break;
            }  
            default:{
                cout << "Invalid toy type please re-enter" << endl;
                return NULL;
            }
        }
        toy->prepareParts();
        toy->combineParts();
        toy->assembleParts();
        toy->applyLabel();

        return toy;
    }
};