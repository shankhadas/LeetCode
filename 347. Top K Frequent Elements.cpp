#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        for(int i: nums) {
            um[i]++;
        }
        vector<pair<int, int>> vp(um.begin(), um.end());
        sort(vp.begin(), vp.end(), [](pair<int, int> a, pair<int, int> b){
            return a.second > b.second;
        });
        vector<int> result;
        for(int i = 0;i < vp.size() && k > 0;i++){
            result.push_back(vp[i].first);
            k--;
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    
    Solution sol;
    vector<int> n=sol.topKFrequent(nums, k);
    for(auto i : n)
        cout<<i<<" ";
    
    cout<<endl;
    return 0;
}