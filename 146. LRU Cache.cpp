#include <bits/stdc++.h>

using namespace std;

class LRUCache {
    int cache_capacity;
    list<int>keys;
    unordered_map<int, pair<int, list<int>::iterator>>cache;
public:
    LRUCache(int capacity) : cache_capacity(capacity) {
        
    }
    
    int get(int key) {
        if(cache.find(key) != cache.end()) {
            keys.erase(cache[key].second);
            keys.push_front(key);
            cache[key].second=keys.begin();
            return cache[key].first;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(cache.find(key) != cache.end()) {
            keys.erase(cache[key].second);
            keys.push_front(key);
            cache[key] = {value, keys.begin()};
        } else {
            if(keys.size() == cache_capacity) {
                cache.erase(keys.back());
                keys.pop_back();
            }
            keys.push_front(key);
            cache[key]={value, keys.begin()};
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

/*int main()
{
    int n = 3;

    Solution sol;
    vector<vector<int>> res = sol.generateMatrix(n);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout << res[i][j] << " ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    return 0;
}*/