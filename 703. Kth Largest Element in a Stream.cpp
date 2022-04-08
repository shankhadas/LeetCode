#include <bits/stdc++.h>

using namespace std;

class KthLargest {
public:
    vector<int>v;
    int k;
    KthLargest(int k, vector<int>& nums) {
        v = nums;
        this->k = k;
        sort(v.begin(), v.end());
    }
    
    int add(int val) {
        auto it = lower_bound(v.begin(), v.end(), val);
        v.insert(it, val;)
        return v[v.size() - k];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

/*int main()
{
    vector<int> stones = {2,7,4,1,8,1};
    
    Solution sol;
    int n=sol.lastStoneWeight(stones);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}*/