//
// Created by das on 4/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int size = tokens.size();
        int max_score = 0, score = 0, left = 0, right = size -1;
        sort(tokens.begin(), tokens.end());

        while(left <= right) {
            if(power >= tokens[left]) {
                power -= tokens[left];
                score++;
                left++;
                max_score = max(max_score, score);
            } else if(score > 0) {
                power += tokens[right];
                score--;
                right--;
                max_score = max(max_score, score);
            } else
                break;
        }
        return max_score;
    }
};

int main()
{
    vector<int> tokens = {100};
    int power = 50;

    Solution sol;
    int res=sol.bagOfTokensScore(tokens, power);

    cout << res <<" ";

    cout<<endl;
    return 0;
}
