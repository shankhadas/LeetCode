#include <bits/stdc++.h>

using namespace std;
                            //   {1, 2, 2, 2, 3, 3}
                            //    0  1  2  3  4  5
class Solution {
public:
    void findSubsets(int ind, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans){
        ans.push_back(ds);
                            cout<<"Ans : ";
                            for(int i=0; i<ans.size(); i++){
                                for(int j=0; j<ans[i].size(); j++){
                                    cout << ans[i][j] << " ";
                                }
                            cout << endl;
                            }
                            cout <<"--------------"<< endl<<endl;

        for(int i=ind; i<nums.size(); i++){
                            cout << "i : " << i << " & ind : " << ind<<endl;
            if(i != ind && nums[i] == nums[i-1]){
                            cout << "miss match : " << i <<" & "<< ind << endl;
                continue;
            }
            ds.push_back(nums[i]);
                            cout << "ds :" ;
                            for(auto i : ds) cout << i << " ";
                            cout<< endl;
                            cout << "Call : findSubsets(" <<i+1<<")"<<endl ;
            findSubsets(i+1, nums, ds, ans);
                            cout << "Call complete: findSubsets(" <<i+1<<")"<<endl<<endl ;

            ds.pop_back();
                            cout << "After ds :" ;
                            for(auto i : ds) cout << i << " ";
                            cout<< endl;
                            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        findSubsets(0, nums, ds, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
    
    vector<int> nums = {1, 2, 2, 2, 3, 3};
    
    Solution sol;
    vector<vector<int>> res = sol.subsetsWithDup(nums);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
            
    cout<<endl;
    return 0;
}