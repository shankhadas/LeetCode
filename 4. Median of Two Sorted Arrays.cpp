#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double res = 0;
        for(int i=0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        int size = nums1.size();
        if(size == 1)
            return nums1[0];
        else if(size == 2)
            return (double)(nums1[0]+nums1[1]) / 2;
        else if(size % 2 == 0){
            size /= 2;
            res = double (nums1[size-1] + nums1[size]) / 2;
        }else{
            size /= 2;
            res = double (nums1[size]);
        }
        return res;
    }
};

int main()
{
    vector<int> nums1 = {1,3}, nums2 = {2};
    
    Solution sol;
    double n=sol.findMedianSortedArrays(nums1, nums2);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}