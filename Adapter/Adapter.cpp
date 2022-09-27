#include <bits/stdc++.h>
using namespace std;

// this is interface class for charger
class IndianSocket {
public:
    virtual void indianCharge() = 0;
};


// this is some socket which we want to use (Adaptee)
class USASocket {
public:
    void usaCharge(){
        cout << "USA plug is charging" << endl;
    }
};

// this is adapter used to charge with USA socket
class SocketAdapter : public IndianSocket, public USASocket {
public:
    void indianCharge(){
        usaCharge();
    }
};

// this is kind of mobile which using charger for charging
int main() {
    unique_ptr<IndianSocket> socket = make_unique<SocketAdapter>();
    socket->indianCharge();

    return 0;
}