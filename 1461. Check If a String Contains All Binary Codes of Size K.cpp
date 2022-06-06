#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool hasAllCodes(string s, int k) {
	if(k > s.size()) return false;      //Edge case
    unordered_set<string> res_set;
    for(int i =0;i<= s.size()-k;i++)        //Insertion into the set
        res_set.insert(s.substr(i,k));
    return res_set.size() == pow(2,k);         //Comparing res with 2^k
    }
};

int main()
{
    string s = "00110110";
    int k = 2;

    Solution sol;
    bool res=sol.hasAllCodes(s, k);
    
    cout << res << "";
    
    cout<<endl;
    return 0;
}