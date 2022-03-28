#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1 (nums1.begin(), nums1.end());
        unordered_set<int> s2 (nums2.begin(), nums2.end());
        vector<vector<int>> res(2);
        for(auto &i : s1){
            if(s2.count(i) == 0)
                res[0].push_back(i);
        }
        for(auto &i : s2){
            if(s1.count(i) == 0)
                res[0].push_back(i);
        }
        return res;
    }
};

int main()
{
    vector<int>nums1 = {1,2,3}, nums2 = {2,4,6};
    
    Solution sol;
    vector<vector<int>> vec=sol.findDifference(nums1, nums2);
    // for(auto i : vec){
    //     for(auto n : i){
    //         cout << n << " ";
    //     }
    // }
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[i].size(); j++){
            cout << vec[i][j] << " ";
        }
    }
    
    cout<<endl;
    return 0;
}