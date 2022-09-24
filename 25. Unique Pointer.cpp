#include <bits/stdc++.h>

using namespace std;

/*
    1. unique_ptr is a class template.
    2. unique_ptr is one of the smart pointer provided by C++11 to prevent memory leaks.
    3. unique_ptr wraps a raw pointer in it, and de-allocate the raw pointer, when unique_ptr object goes out of scope.
    4. similar to actual pointers we can use -> & * on the object of unique_ptr, because it is overloaded in unique_ptr class.
    5. when exception comes then also it'll de-allocate the memory hence no memory leak.
    6. not only object, we can create array of objects of unique_ptr.

    // OPERATIONS:
        release, reset, swap, get, get_deleter

    PS: lightweight compared to shared_ptr & weak_ptr
*/

class Foo {
    int x;
public:
    explicit Foo(int x):x{x} {}
    
    int getX() { return x; }
    ~Foo() { cout << "Foo Dest" << endl; }
};

int main() {
    // Foo *f = new Foo(10);
    // cout << f->getX() << endl;
        // delete f;            //is not present which will cause memory leaks

    // std::unique_ptr<Foo> p(new Foo(10));
    // cout << p->getX() << endl;
            // here delete isn't required. In the above commented code line no. 27 we've created a pointer but here 
            // at line 31, p is an object on stack because when something goes out of scope then all the local variables on stack go destroyed.
            // So in this case the destructor will be called for unique_ptr p in which pointer 'new Foo(10)' is called.
            // Here the pointer will be deleted from the destructor of the unique_ptr. That's how we ended up caliing "~Foo() { cout << "Foo Dest" << endl; }"

    unique_ptr<Foo> p1 (new Foo(10)); // not exception safe
    unique_ptr<Foo> p2 = make_unique<Foo>(20);  // should use make_unique, it'll handle exceptions also.
    cout << p1->getX() << (*p2).getX() << endl;  // both the expressions are same here

    // p1 = p2;     // FAIL: because ownership can't be copied.
    unique_ptr<Foo> p3 = std::move(p1);      // PASS: because movinf ownership is allowed. After this line ownership is transferred to p3 from p1, and p1 becomes nullptr.

    Foo* p5 = p3.get();  //get function will give the pointer from p3 to p5.
    Foo* p4 = p3.release();     // it'll release the ownership of manages object in it and return the manages object. After this line p3 is nullptr.
    
    p2.reset();     // this will reset p2 on line 41. It is changing the managed object. And after this line p2 is deleted.
    cout << p2->getX() <<endl;

    return 0;
}