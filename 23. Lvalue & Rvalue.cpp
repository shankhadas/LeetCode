#include <bits/stdc++.h>

using namespace std;

/*
    Lvalue: if you can take the address of expression then its Lvalue and they last extended period of time.
    Rvalue: are such expression which you can't take address and they are temporary, don't exist after one line.


    int x = 10; // x : Lvalue & 10 : Rvalue
    int a = 10, b = 20;
    int x = (a+b); // x : Lvalue & (a+b) Rvalue
    int *p = &(a+b) // error: (a+b) is not Lvalue

    class Cat{};
    Cat c = Cat(); // Cat() is a Rvalue

    int square(int x) { return x*x; }
    int sq = square(10);  // square(10) is an Rvalue
*/