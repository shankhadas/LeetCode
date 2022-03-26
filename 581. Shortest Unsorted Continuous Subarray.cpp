#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v=nums;
        int start=0;
        int end=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=v[i]){
                start= i;
                break;
            }
        }
        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]!=v[j]){
                end =j;
                break;
            }
        }
        if(end==start)return 0;
        return end-start+1;
    }
};

int main()
{
    vector<int> nums = {2,6,4,8,10,9,15};
    
    Solution sol;
    int n=sol.findUnsortedSubarray(nums);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}