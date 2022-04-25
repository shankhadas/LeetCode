#include <bits/stdc++.h>

using namespace std;

class MyHashSet {
public:
    vector<bool> ans;
    
    MyHashSet() {
        ans.resize(1e6+1,false);
    }
    
    void add(int key) {
        ans[key]=true;
    }
    
    void remove(int key) {
        ans[key]=false;
    }
    
    bool contains(int key) {
        return ans[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
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