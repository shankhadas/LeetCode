#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mymap;
        int sum = 0;
        int longest_subarray = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0)
                nums[i] = -1;
        }
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            
            if(sum==0){
                longest_subarray = max(longest_subarray, i+1);
            }
            else if(mymap.find(sum)!=mymap.end()){
                longest_subarray = max(longest_subarray, i-mymap[sum]);
            }
            else
                mymap[sum] = i;
        }
        return longest_subarray;
    }
};

int main()
{
    vector<int> v{0, 1, 0, 1};
    Solution sol;
    int n=sol.findMaxLength(v);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}