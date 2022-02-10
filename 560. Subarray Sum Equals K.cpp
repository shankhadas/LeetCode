#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size() == 0)
            return 0;
        int count = 0;
        map<int, int>my_map;
        int curr_sum=0;
        for(int i : nums){
            curr_sum += i;
            if(curr_sum == k)
                count ++;
            if(my_map.find(curr_sum - k) != my_map.end())
                count +=my_map[curr_sum - k];
            if(my_map.find(curr_sum) != my_map.end())
                my_map[curr_sum] += 1;
            else
                my_map[curr_sum] = 1;
        }
        return count;
    }
};

int main()
{
    vector<int> intervals = {1,1,1};
    int k = 2   ;
    Solution sol;
    int n=sol.subarraySum(intervals, k);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}