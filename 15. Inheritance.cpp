#include <bits/stdc++.h>

using namespace std;

/*  Q. WHAT IT DOES
    A. inherits the feature/properties/characteristics of Base Class into Derived Class. And code reuseability.
    
    TERMINOLOGY: Base/Derived OR Parent/Child

    TYPES OF INHERITANCE:
    1. Single : 
                A derived class with only one base class.
                A
                |
                B
    2. Multilevel : 
                    A derived class with base class that base class is a derived class of another base class.
                    A
                    |
                    B
                    |
                    C
    3. Multiple :
                    A derived class with multiple base class.
                    A  B C D
                     \ | | /
                        C
    4. Heirarchical :
                        Multiple derived class with same base class. 
                           C
                        / | | \
                       D  E F  G
    5. Hybrid :
                Combination of multiple and heirarchical.
                    A  B C D
                     \ | | /
                        C
                     / | | \
                    D  E F  G
    6. Multipath : 
                    A derived class with two different base class and these two base class have one common base class.
                    A
                   / \
                  B   C
                   \ /
                    D

    MODES OF INHERITANCE:
    1. public (visible to everyone)
    2. protected (visible to current and derived class only)
    3. private (visible to current class only)

-------------------------------------------------------------------------
|     BASE CLASS  |  DERIVED CLASS  |  DERIVED CLASS  |  DERIVED CLASS  |
-------------------------------------------------------------------------
|                 |  private MODE   |  protected MODE |   public MODE   |  <= INHERITANCE MODE
------------------------------------------------------------------------- 
|       private   |  Not inherited  |  Not inherited  |  Not inherited  |
|       protected |  private        |  protected      |  protected      |
|       public    |  private        |  protected      |  public         |
-------------------------------------------------------------------------
*/



int main() {

    return 0;
}