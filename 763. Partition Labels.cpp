#include <bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/partition-labels/discuss/1868842/JavaC%2B%2B-VISUALLY-EXPLAINEDDDDD!!

class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map <char, int>m;
        for(int i=0; i<s.size(); i++){
            m[s[i]] = i;
        }
        vector<int>res;
        int prevIdx = -1;
        int maxIdx = 0;
        for(int i=0; i<s.size(); i++){
            maxIdx = max(maxIdx, m[s[i]]);
            if(maxIdx == i){
                res.push_back(maxIdx - prevIdx);
                prevIdx = maxIdx;
            }
        }
        return res;
    }
};

int main()
{
    string s = "ababcbacadefegdehijhklij";
    
    Solution sol;
    vector<int> n=sol.partitionLabels(s);
    for(int i : n){
        cout << i << " ";
    }
    
    cout<<endl;
    return 0;
}