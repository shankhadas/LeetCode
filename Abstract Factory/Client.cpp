#include <bits/stdc++.h>
using namespace std;

#include "CarFactory.cpp"

// #define SIMPLE_CAR 1;
#define LUXURY_CAR 1

int main() {

    #ifdef SIMPLE_CAR
        CarFactory* factory = new SimpleCarFactory;
    #elif LUXURY_CAR
        CarFactory* factory = new LuxuryCarFactory;
    #endif

    Car* car = factory->buildWholeCar();
    car->printDetails();

    //----------------------------------------------
    // CarFactory* factorySimple = new SimpleCarFactory;
    // Car* carSimple = factorySimple->buildWholeCar();
    // carSimple->printDetails();

    // CarFactory* factoryLuxury = new LuxuryCarFactory;
    // Car* carLuxury = factoryLuxury->buildWholeCar();
    // carLuxury->printDetails();
    //----------------------------------------------

    return 0;
}