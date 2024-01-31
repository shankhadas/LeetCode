//
// Created by das on 22/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();       
        unordered_map<int, int>freq;

        //storing frequecny of each number
        for(int i =0; i< n ; i++){
            freq[nums[i]]++;
        }

        vector<int>ans(2);

        //first part: finding number whose frequency is 2
        for(auto& i: freq){
            if(2 == i.second){
                ans[0] = i.first;
                break;
            }
        }
        
        //second part: finding the missing number
        for(int i =1; i< n+1; i++){
            if(0 == freq[i]){
                ans[1] = i;
                break;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {1,2,2,4};

    Solution sol;
    vector<int> res=sol.findErrorNums(nums);

    for(auto a : res){
        cout << a << " ";
    }
    cout << endl;

    cout<<endl;
    return 0;
}