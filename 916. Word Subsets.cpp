#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>freq(26,0);           //create the frequency count of elements of words2.
        for(auto x:words2){
            vector<int>temp(26,0);
            for(auto y:x){
                temp[y-'a']++;
                freq[y-'a'] = max(freq[y-'a'],temp[y-'a']); 
            }
        }
        vector<string>res;
        for(auto x:words1){
            vector<int>temp(26,0);
            for(auto y:x) temp[y-'a']++;    //create the frequency count for all the elements in words1
            bool flag=true;
            for(int i=0 ; i<26 ; i++)
                if(freq[i]>temp[i]) {flag=false;break;}         //check if the frequency count of words2 is subset of all words1 elements
            if(flag) res.push_back(x);
        }
        return res;
    }
    /*bool helper(string s1, vector<char>& s2){
        size_t found;
        for(auto str : s2){
            if((found = s1.find(str)) == string::npos)
                return false;
            s1[found] = '\0';
        }
        return true;
    }

    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;

        vector<char> v;
        for(auto st : words2){
            copy(st.begin(), st.end(), back_inserter(v));
        }

        for(auto str : words1){
            if(helper(str, v))
                ans.push_back(str);
        }
        return ans;
    }*/
};

int main()
{
    // vector<string> words1 = {"amazon","apple","facebook","google","leetcode"}, words2 = {"e","o"};
    vector<string> words1 = {"amazon","apple","facebook","google","leetcode"}, words2 = {"eo","lo"};
    
    Solution sol;
    vector<string> res=sol.wordSubsets(words1, words2);
    
    for(auto it : res)
        cout << it << " ";
    
    cout<<endl;
    return 0;
}