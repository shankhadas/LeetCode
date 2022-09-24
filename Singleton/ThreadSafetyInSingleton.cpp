#include <bits/stdc++.h>
using namespace std;

class MySingleton{
    static MySingleton* m_pOnlyOneInstance;

    MySingleton();
public:
    static MySingleton* GetInstance(){
        if(m_pOnlyOneInstance == NULL){
            m_pOnlyOneInstance = new MySingleton(); // If two threads are running simultenenously T1 & T2 & once T1 initialized with the instances & 
                                                    // T2 comes in place to intialize instances that's fine. But if now T1 again comes back in via context switch
                                                    // it'll again intialize with the instance. This is the problem as we always should have one instance.
        }
        return m_pOnlyOneInstance;
    }
};

// Solutions:

// Approach 1: (Mutex Lock/Unlock)
class MySingleton{
    static MySingleton* m_pOnlyOneInstance;

    MySingleton();
public:
    static MySingleton* GetInstance(){
        // Lock Mutex
        if(m_pOnlyOneInstance == NULL){
            m_pOnlyOneInstance = new MySingleton();
        }
        // Unlock Mutex
        return m_pOnlyOneInstance;
    }
};
// Problem: performance isn't good. For multiple threads it'll do lock & unlock also even in no threads it'll do the same.

// Approach 2: (Eager Insatantiation)
class MySingleton{
    static MySingleton* m_pOnlyOneInstance;

    MySingleton();
public:
    static MySingleton* GetInstance(){
        // Lock Mutex
        if(m_pOnlyOneInstance == NULL){
            m_pOnlyOneInstance = new MySingleton();
        }
        // Unlock Mutex
        return m_pOnlyOneInstance;
    }
};
int main() {
    MySingleton* instance = MySingleton :: GetInstance();
    /* Rest of code where you start thread and other stuff
        . here already instance has been instantiated once &
        . can be used in several threads
        .
    */
   return 0;
}
// Problem: Lazy Instantiation is not there which means only when I need the object then & there I can create it. Otherwise I won't waste my resources.
//          But sometimes it takes more time to create the object. Sometimes it's not is use so might be possible that object is getiing created but for no use.

// Approach 3: 
class MySingleton{
    static MySingleton* m_pOnlyOneInstance;

    MySingleton();
public:
    static MySingleton* GetInstance(){
        if(m_pOnlyOneInstance == NULL){
        // Lock Mutex
        }
        if(m_pOnlyOneInstance == NULL){
            m_pOnlyOneInstance = new MySingleton();
        }
        // Unlock Mutex
        return m_pOnlyOneInstance;
    }
};
// Here we achieve both Lazy Instantiation & performance. (Sometimes it depends on the OS how it'll support)