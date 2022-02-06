#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int n : nums){
            if (i < 2 || n > nums[i-2])
                nums[i++] = n;
        }
        return i;
    }
};

int main()
{
    vector<int> num = {1, 1, 1, 2, 2, 3};
    Solution sol;
    int n = sol.removeDuplicates(num);
    
    cout<<n;
    
    cout<<endl;
    return 0;
}