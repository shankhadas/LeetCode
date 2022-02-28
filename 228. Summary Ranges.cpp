#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int size = nums.size();
        if(size == 0) return res;
        for(int i=0; i<size;){
            int start = i, end = i;
            while(end+1 < size && nums[end]+1 == nums[end+1])
                end++;
            if(end > start)
                res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
            else
                res.push_back(to_string(nums[start]));
            i = end+1;
        }
        return res;
    }
};

int main()
{
    vector<int> v = {0,2,3,4,6,8,9};
    
    Solution sol;
    vector<string> n=sol.summaryRanges(v);
    for(int i=0; i<n.size(); i++){
        cout << n[i] << " ";
    }
    
    cout<<endl;
    return 0;
}