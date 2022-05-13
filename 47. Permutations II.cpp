#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> ans ;
    void helper( vector<int> &nums, int cnt, int n ){
        // If cnt == nums.size we have got our one combination 
        // Push it inside our answer 
        if( cnt == n ){
            ans.push_back( nums ) ;
            return ;
        }
        unordered_set<int> s ;      // Set ensures that one element is placed once at every ith position  

        for( int i=cnt ; i<n ; i++ ){
            // If we have used the number at this ith position previously then just ignore this and continue to next number 
            if( s.find(nums[i]) != s.end() )  
                continue ;  
            else s.insert(nums[i]);      // If we have not used the number then insert it for next verification

            swap( nums[i], nums[cnt] );       // Create a combination 

            helper( nums, cnt+1, n ) ;        // Find out all possible combinations with the created one 

            swap( nums[i], nums[cnt] );       // Backtracking 

        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums){
        int n = nums.size();
        helper( nums, 0, n);
        return ans ;
    }
};

int main()
{
    vector<int> nums = {1,2,3};
    Solution sol;
    vector<vector<int>> n =sol.permuteUnique(nums);
    for(int i=0; i<n.size(); i++){
        for(int j=0; j<n[i].size(); j++){
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<endl;
    return 0;
}