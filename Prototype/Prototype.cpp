#include <bits/stdc++.h>
using namespace std;

enum BulletType { SIMPLE, GOOD};

/* Bullet is the base Prototype */
class Bullet {
protected:
    string bulletName;
    float speed;
    float firePower;
    float damagePower;
    float direction;

public:
    Bullet(){}
    Bullet(string bulletName, float speed, float firePower, float damagePower):bulletName{bulletName}, speed{speed}, firePower{firePower}, damagePower{damagePower} {}

    virtual ~Bullet() {}

    virtual unique_ptr<Bullet> clone() = 0;
    void fire(float dir){
        direction = dir;

        cout << "Name: " << bulletName << endl
             << "Speed: " << speed << endl
             << "Fire Power: " << firePower << endl
             << "Damage Power: " << damagePower << endl 
             << "Direction: " << direction << endl << endl;
    }
};

/* SimpleBullet is a concrete Prototype*/
class SimpleBullet : public Bullet {
public:
    SimpleBullet(string bulletName, float speed, float firePower, float damagePower):Bullet(bulletName, speed, firePower, damagePower) {}

    unique_ptr<Bullet> clone() override {
        return make_unique<SimpleBullet>(*this);
    }
};

/* GoodBullet is a concrete Prototype*/
class GoodBullet : public Bullet {
public:
    GoodBullet(string bulletName, float speed, float firePower, float damagePower):Bullet(bulletName, speed, firePower, damagePower) {}

    unique_ptr<Bullet> clone() override {
        return make_unique<GoodBullet>(*this);
    }
};

/* BulletFactory is the client */
class BulletFactory {
    unordered_map<BulletType, unique_ptr<Bullet>, hash<int>> m_Bullets;

public:
    BulletFactory(){
        m_Bullets[SIMPLE] = make_unique<SimpleBullet>("Simple Bullet", 50, 75, 75);
        m_Bullets[GOOD]   = make_unique<SimpleBullet>("Simple Bullet", 75, 100, 100);
    }

    unique_ptr<Bullet> createBullet(BulletType BulletType){
        return m_Bullets[BulletType]->clone();
    }
};

int main() {
    BulletFactory bulletFactory;

    auto Bullet = bulletFactory.createBullet(SIMPLE);
    Bullet->fire(90);

    Bullet = bulletFactory.createBullet(GOOD);
    Bullet->fire(100);
}