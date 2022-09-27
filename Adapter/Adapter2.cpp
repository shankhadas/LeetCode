#include <bits/stdc++.h>
using namespace std;

// this is interface class for charger
class IndianSocket {
public:
    virtual void indianCharge(int) = 0;
};


// this is some socket which we want to use (Adaptee)
class USASocket {
public:
    void usaCharge(){
        cout << "USA plug is charging" << endl;
    }
};

class GSocket {
public:
    void gCharger(){
        cout << "G plug is charging" << endl;
    }
};

// this is adapter used to charge with USA socket
class SocketAdapter : public IndianSocket, public USASocket, public GSocket {
public:
    void indianCharge(int type) {
        switch(type){
            case 1: 
                usaCharge();
                break;

            case 2: 
                gCharger();
                break;

            default:
                break;
        }
    }
};

// this is kind of mobile which using charger for charging
int main() {
    unique_ptr<IndianSocket> socket = make_unique<SocketAdapter>();
    socket->indianCharge(1);
    socket->indianCharge(2);

    return 0;
}