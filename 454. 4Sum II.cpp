#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int, int>m;

        for(int k : nums3){
            for(int l : nums4){
                m[k+l]++;
            }
        }
        int count = 0;
        for(int i : nums1){
            for(int j : nums2){
                count += m[-(i+j)];
                // if(m[-(i+j)]){
                //     count += m.at(-(i+j));
                // }
            }
        }
        return count;
    }
};

int main()
{
    vector<int> v1{1, 2};
    vector<int> v2{-2, -1};
    vector<int> v3{-1, 2};
    vector<int> v4{0,2};

    int target = 0;
    Solution sol;
    int n=sol.fourSumCount(v1, v2, v3, v4);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}