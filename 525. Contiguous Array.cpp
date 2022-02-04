#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mymap;
        int sum = 0;
        int longest_subarray = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i]==0?-1:1;
            
            if(sum==0){
                if(longest_subarray < i+1)
                    longest_subarray = i+1;
            }
            else if(mymap.find(sum)!=mymap.end()){
                if(longest_subarray < i-mymap[sum])
                    longest_subarray = i-mymap[sum];
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