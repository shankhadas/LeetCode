/*  https://www.youtube.com/watch?v=URE9MCTF8Ls&list=PLk6CEY9XxSIDZhQURp6d8Sgp-A0yKKDKV&index=9


                            Venn Diagram                                  UML Notation
                ___________________________________________________
                | Association                                     |    class A -> class B
                |            _____________________________________|
                |            | Aggregation                        |    class A <>- class B
                |            |             _______________________|
                |            |             | Composition          |    class A <:>- class B
                |____________|_____________|______________________|
                                    
*/

/* Association : tells that object A is going to use object B but don't specify about life cycle. 
                 So here object B will be passed as copy to object A. Here Foo using Bar
*/
class Bar {};
class Foo {
    void Baz(Bar bar) {}
};

/* Aggregation : one object will use another object by reference. 
                 So same object will be used but no life cycle handled. 
                 I've a object which I've borrowed from someone. Here when Foo dies Bar may live on.
*/
class Bar {};
class Foo {
    Bar _bar;
    Foo(const Bar& bar){  // using reference here so exactly same object used like borrowing it.
        _bar = bar; 
    }
};

/* Composition : one object is going to use the other one anf hold the life cycle. 
                 So if object A using object B and whenever object A dies automatically object B dies.
                 I own an object and I'm responsible for its lifetime. When Foo dies Bar also dies.
*/
class Bar {};
class Foo {

private:
    Bar* bar = new Bar();
};