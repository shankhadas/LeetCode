#include <bits/stdc++.h>

using namespace std;

/*
    1. shared_ptr is a smart pointer which can share the ownership of object (managed object)
    2. sevaral shared_ptr can point to the same object (managed object)
    3. It keeps a referance count to maintain how many shared_ptr are pointing to the same object.
       And once the last shared_ptr goes out of scope then the managed object gets deleted.
    4. shared_ptr is thread & not thread safe. [?]
        a. control block is thread safe
        b. managed object is not
    5. There are 3 ways shared_ptr will destroy managed objects
        a. If the last shared_ptr goes out of scope.
        b. If shared_ptr is initialized with some other shared_ptr.
        c. If shared_ptr is reset.
    6. Reference count doesn't work when we use reference or pointer of shared_ptr.
*/

class Foo {
    int x;
public:
    Foo(int x):x{x} {}
    int getX() { return x; }
    ~Foo() { cout << "~Foo" << endl; }
};

int main() {
    // Foo* f = new Foo(1);
    // cout << f->getX() << endl;

    std::shared_ptr<Foo> sp(new Foo(100));
    cout << sp->getX() << endl;
    cout << sp.use_count() << endl;
    std::shared_ptr<Foo> sp1 = sp;
    // std::shared_ptr<Foo> &sp1 = sp;
    // std::shared_ptr<Foo> *sp1 = &sp;
    cout << sp.use_count() << endl;
    cout << sp1.use_count() << endl;
    // cout << sp1->use_count() << endl;


    return 0;
}