#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums2) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : nums1) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;

        /*
        vector<int> result;
        for(int i = 0;i < nums1.size();i++) {
            bool flag = false;
            bool equal = false;
            for(int j = 0;j < nums2.size();j++) {
                if(nums1[i] == nums2[j]) equal = true;
                if(nums1[i] < nums2[j] && equal) {
                    result.push_back(nums2[j]);
                    flag = true;
                    break;
                }
            }
            if(!flag) {
                result.push_back(-1);
            }
        }
        return result;
        */
    }
};

int main()
{
    vector<int> nums1 = {4,1,2}, nums2 = {1,3,4,2};
    
    Solution sol;
    vector<int> n=sol.nextGreaterElement(nums1, nums2);
    for(auto i : n){
        cout << i <<" ";
    }
    
    cout<<endl;
    return 0;
}