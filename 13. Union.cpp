#include <bits/stdc++.h>

using namespace std;

/*  
    1. Same as class & structure, it's a user define data type.
    2. all members share the biggest same memory location.
    3. used in C to achieve polymorphism.
*/

union Square {
    int height;
    int width;
};

int getArea(int height, int width) {
    return height * width;
};

int main() {
    Square sq;
    sq.width = 10;  // as union share the biggest same memory location so height & width will be allocated with 10.
    cout << getArea(sq.height, sq.width) << endl;

    return 0;
}