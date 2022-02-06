#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        vector<int> res;
        int i = 0, j = 1, k;
        int size = nums.size();
        while(i < size){
            even.push_back(nums[i]);
            i += 2;
        }
        while(j < size){
            odd.push_back(nums[j]);
            j += 2;
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());

        for(k=0; k<size; k++){
            if(k < even.size())
                res.push_back(even[k]);
            
            if(k < odd.size())
                res.push_back(odd[k]);
        }
        return res;
    }
};

int main()
{
    vector<int> num = {4,1,2,3};
    Solution sol;
    vector<int> n = sol.sortEvenOdd(num);
    for(int a : n)
        cout << a << " ";
        
    cout<<endl;
    return 0;
}