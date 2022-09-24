#include <bits/stdc++.h>

using namespace std;

/*
    1. weak_ptr is for non-ownership smart pointer.
    2. It actually reference to an object which is managed by shared_ptr.
    3. A weak_ptr is created as a copy of shared_ptr.
    4. We've to convert weak_ptr to shared_ptr in order to use the managed object.
    5. It is used to remove cyclic dependency between shared_ptr. 
*/

