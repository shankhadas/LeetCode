#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        set<pair<int,int> > s;      // set is to store pairs of count and index
                                    // count of 1 in ith row, {count,index};
                                    // set will automatically sort the pair {count, index} in ascending order.   
        for(int i = 0; i<n; ++i){
            int cnt = count(mat[i].begin(),mat[i].end(),1);     // stl function for counting frequency of 1 in current row
            s.insert({cnt,i});          // inserting cnt and index pair to set
        }
        vector<int> ans;        // first k weakest row is our answer 
        for(auto i : s){
            if(k == 0)
                break;
            ans.push_back(i.second);
            --k;
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> mat =  {{1,1,0,0,0},
                                {1,1,1,1,0},
                                {1,0,0,0,0},
                                {1,1,0,0,0},
                                {1,1,1,1,1}};
    int k = 3;
    
    Solution sol;
    vector<int> vec=sol.kWeakestRows(mat, k);
    for(auto n : vec)
        cout << n << " ";
    
    cout<<endl;
    return 0;
}