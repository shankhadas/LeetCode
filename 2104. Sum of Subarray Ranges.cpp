#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            priority_queue<long long> pq1;
            priority_queue<long long, vector<long long>, greater<long long>> pq2;
            for (int j = i; j < n; j++)
            {
                pq1.push(nums[j]);
                pq2.push(nums[j]);
                ans += (pq1.top() - pq2.top());
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1,2,3};
    
    Solution sol;
    long long n=sol.subArrayRanges(nums);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}