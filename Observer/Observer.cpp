#include <bits/stdc++.h>
using namespace std;

// -1 0 1
class Car {
    int position;
    int temp;
    vector<class Observer*> observerList;
    // vector<class Observer*> observerTempList;

public:
    int getPosition() { return position; }
    void setPosition(int newPosition){ 
        position = newPosition; 
        notify();
    } 
    void setTemp( int newTemp){
        temp = newTemp;
        // notifyTemp();
    }
    void attach(Observer* obs){
        observerList.push_back(obs);
    }
    // void detach(Observer* obs){
    //     observerList.erase(remove(observerList.begin(), observerList.end(), obs), observerList.end());
    // }
    void notify();
    // void notifyTemp();
};

class Observer {
    Car* _car;

public:
    Observer(Car* car){
        _car = car;
        _car->attach(this);
    }

    virtual void update() = 0;

protected:
    Car* getCar() { return _car; }
};

void Car :: notify() {
    for(int i=0; i<observerList.size(); i++){
        observerList[i]->update();
    }
}

// void Car :: notifyTemp() {
//     for(int i=0; i<observerTempList.size(); i++){
//         observerTempList[i]->update();
//     }
// }

class LeftObserver : public Observer {
public:
    LeftObserver(Car* car):Observer{car} {}
    void update(){
        int pos = getCar()->getPosition();
        if(pos < 0)
            cout << "left side" << endl;
    }
};

class RightObserver : public Observer {
public:
    RightObserver(Car* car):Observer{car} {}
    void update(){
        int pos = getCar()->getPosition();
        if(pos > 0)
            cout << "right side" << endl;
    }
};

class MiddleObserver : public Observer {
public:
    MiddleObserver(Car* car):Observer{car} {}
    void update(){
        int pos = getCar()->getPosition();
        if(pos == 0)
            cout << "running middle" << endl;
    }
};

/*
    -1 0 1  available positions
    -1  driving left
     0  driving middle
     1  driving right
*/

int main() {
    Car* car = new Car();
    
    LeftObserver leftobserver(car);
    MiddleObserver middleobserver(car);
    RightObserver rightobserver(car);

    cout << "hit left(l) / right(r) / center(c) to drive else break(b) to close" << endl;
    char pressButton;
    bool breakLoop = false;

    while(breakLoop == false){
        cin >> pressButton;
        switch(pressButton){
            case 108:{      // l -->  pressed for left side
                car->setPosition(-1);
                break;
            }
            case 99:{       // c --> pressed for center
                car->setPosition(0);
                break;
            }
            case 114:{      // r --> pressed for right side
                car->setPosition(1);
                break;
            }
            case 98:{       // b --> pressed for break
                breakLoop = true;
                break;
            }
            default:{
                cout << "drive  carefully" << endl;
                break;
            }
        }
    }
    delete car;
    cout << "Bye..." << endl;

    return 0;
}