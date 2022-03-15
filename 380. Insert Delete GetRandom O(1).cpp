#include <bits/stdc++.h>

using namespace std;

class RandomizedSet {
    unordered_set<int> my_set;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        return (my_set.insert(val)).second;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        return my_set.erase(val);
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return *next(my_set.begin(), rand() % my_set.size());
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */