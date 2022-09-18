#include <bits/stdc++.h>
using namespace std;

#include "Car.cpp"

class CarFactory {
private:
    Car *car;
public:
    virtual Tire* buildTire() = 0;
    virtual Body* buildBody() = 0;
    // more product's part can come here
public:
    virtual Car* buildWholeCar() = 0;
};

class SimpleCarFactory : public CarFactory {
    Tire* buildTire(){
        return new SimpleTire();
    }
    Body* buildBody(){
        return new SimpleBody();
    }
    Car* buildWholeCar(){
        Car* car = new Car("SimpleCar");
        car->setTire(buildTire());
        car->setBody(buildBody());
        return car;
    }
};

class LuxuryCarFactory : public CarFactory {
    Tire* buildTire(){
        return new LuxuryTire();
    }
    Body* buildBody(){
        return new LuxuryBody();
    }
    Car* buildWholeCar(){
        Car* car = new Car("LuxuryCar");
        car->setTire(buildTire());
        car->setBody(buildBody());
        return car;
    }
};