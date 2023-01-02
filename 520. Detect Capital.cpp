#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size() == 1) return true;
        if(islower(word[1])){
            for(int i = 1; i < word.size(); i++){
                if(!islower(word[i]))
                    return false;
            }
        } else {
            for(char c : word){
                if(islower(c))
                    return false;
            }
        }
        return true;
    }
};

int main()
{
    string word = "FlaG";

    Solution sol;
    cout << sol.detectCapitalUse(word) << "\n";
        
    cout<<endl;
    return 0;
}