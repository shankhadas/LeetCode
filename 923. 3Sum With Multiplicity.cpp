#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                ans += mp[target-arr[i]-arr[j]];
                ans =ans%1000000007;
            }
            mp[arr[i]]++;
        }
        return ans;
    }
};

int main()
{
    vector<int> arr = {1,1,2,2,3,3,4,4,5,5};
    int target = 8;
    Solution sol;
    int n=sol.threeSumMulti(arr, target);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}