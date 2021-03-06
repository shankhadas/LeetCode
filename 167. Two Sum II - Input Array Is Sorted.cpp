#include <bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/partition-labels/discuss/1868842/JavaC%2B%2B-VISUALLY-EXPLAINEDDDDD!!

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        while(numbers[left] + numbers[right] != target) {
            if (numbers[left] + numbers[right] < target)
                left++;
            else 
                right--;
        }
        // vector<int> res;
        // res.push_back(left+1);
        // res.push_back(right+1);
        // return res;
        return {left+1, right+1};
    }
};

int main()
{
    // vector<int> numbers = {2,7,11,15};
    // int target = 9;
    // vector<int> numbers = {2,3,4};
    // int target = 6;
    // vector<int> numbers = {0,0,3,4};
    // int target = 0;
    vector<int> numbers = {1,2,3,4,4,9,56,90};
    int target = 8;

    Solution sol;
    vector<int> res=sol.twoSum(numbers, target);
    for(auto i : res)
        cout << i << " ";
    
    cout<<endl;
    return 0;
}