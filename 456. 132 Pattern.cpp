#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int s3 = INT_MIN;
        int n = nums.size();
        
        stack<int>s;
        for(int i = n-1;i>=0;i--){
            if(nums[i]<s3)
                return true;
            else{
                while(!s.empty() && nums[i]>s.top()){
                    s3 = s.top();
                    s.pop();
                }
            }
            s.push(nums[i]);
        }
        return false;
    }
};

int main()
{
    vector<int> nums = {-1,3,2,0};
    Solution sol;
    bool n=sol.find132pattern(nums);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}