#include <bits/stdc++.h>

using namespace std;

/*
    1. Smart pointer is a class which wraps a raw pointer, to manage the lifetime of the pointer.
    2. The most fundamental job of smart pointer is to remove the chance of memory leak.
    3. It makes sure that the object is deleted if it is not reference any more.

    // TYPES:
    1. unique_ptr : allows only one owner of the underlying pointer.
    2. shared_ptr : allows multiple owners of the same pointer (reference count is maintained).
    3. weak_ptr : special type of shared_ptr which doesn't count the references.

    4. auto_ptr : depricted after C++11 (not in use anymore)
*/

class MyInt{
    int* data;
public:
    explicit MyInt(int* p = nullptr) { data = p; }
    ~MyInt(){ delete data; }
    int& operator * () { return *data; }
};

int main() {
    int* p = new int(10);
    MyInt myint = MyInt(p);
    cout << *myint << endl;

    return 0;
}