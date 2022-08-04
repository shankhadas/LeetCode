#include <bits/stdc++.h>

using namespace std;

/* FUNCTION OVERLOADING WILL NOT WORK FOR THE BELOW CONDITIONS:
    1. Funcion declarations that differ only in the return type. */
int add(double x, double y){}
double add(double x, double y){}

/*  2. In class if similar function name and parameter but one is static and another non-static. */
class Base {
public:
    static void fun(int x){}
    void fun(int x){}    
};

/*  3. When receives array as pointer or array both are similar. */
int add(int arr[])          { cout << "first" << endl;}
int add(int *p)             { cout << "second" << endl;}

/*  4. const and volatile doesn't make any difference. */
int add(int arr)            { cout << "first" << endl;}
int add(volatile int p)     { cout << "second" << endl;}
int add(constant int p)     { cout << "second" << endl;}

/*  5. One function parameter declared as function type and another as pointer to the same function are equal. */
int add(int ())             { cout << "first" << endl;}
int add(int (*)())          { cout << "second" << endl;}

/*  6. Two function parameters are equal if they differ only if once of them is having  default parameter. */
int add(int x)              { cout << "first" << endl;}
int add(int p=10)           { cout << "second" << endl;}

int main()
{
    Base b;
    b.fun();

    return 0;
}