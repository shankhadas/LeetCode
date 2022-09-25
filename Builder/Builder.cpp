#include <bits/stdc++.h>
using namespace std;

/* Your end product */
class Plane {
    string plane;
    string body;
    string engine;

public:
    Plane(string planeType):plane{planeType} {}

    string getBody() { return body; }
    string getEngine() { return engine; }
    void setBody(string b) { body = b; }
    void setEngine(string e) { engine = e; }

    void show(){
        cout << "Plane type: " << plane << endl 
             << "Body type: " << body << endl
             << "Engine type: " << engine << endl
             << endl;
    }
};

/* PlaneBuilder Abstract Class
   Means all builders should have atleast these methods */
class PlaneBuilder {
protected:
    Plane *plane;

public:
    virtual void getPartsDone() = 0;
    virtual void buildBody() = 0;
    virtual void buildEngine() = 0;
        // virtual ~PlaneBuilder() {}
    Plane* getPlane() { return plane; }
};

/* PlaneBuilder concrete class
 knows only how to build Propeller Plane */
class PropellerBuilder : public PlaneBuilder {
public:
    void getPartsDone() { plane = new Plane("Propeller plane"); }
    void buildBody() { plane->setBody("Propeller body"); }
    void buildEngine() { plane->setEngine("Propeller engine"); }
        //~PropellerBuilder() { delete plane; }
};

/* PlaneBuilder concrete class
 knows only how to build Jet Plane */
class JetBuilder : public PlaneBuilder {
public:
    void getPartsDone() { plane = new Plane("Jet plane"); }
    void buildBody() { plane->setBody("Jet body"); }
    void buildEngine() { plane->setEngine("Jet engine"); }
        //~JetBuilder() { delete plane; }
};

// Defines steps and tells to the builder that build in given order.
class Director {
    // PlaneBuilder* builder;

public:
    Plane* createPlane(PlaneBuilder* builder){
        builder->getPartsDone();
        builder->buildBody();
        builder->buildEngine();
        return builder->getPlane();
    }
};

int main () {
    Director dir;
    PropellerBuilder pb;
    JetBuilder jb;

    Plane* pro = dir.createPlane(&pb);
    Plane* jet = dir.createPlane(&jb);

    pro->show();
    jet->show();

    delete pro;
    delete jet;

    return 0;
}