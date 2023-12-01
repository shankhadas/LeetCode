#include <bits/stdc++.h>

using namespace std;
/*
Time complexity: O(N)
Space complexity: O(N)
*/

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> freq;
        for(int task : tasks){
            freq[task]++;
        }
        int minimunRound = 0;
        for(auto [task, count] : freq){
            if(count == 1) return -1;
            if(count % 3 == 0)
                minimunRound += count / 3;
            else
                    // If count % 3 = 1; (count / 3 - 1) groups of triplets and 2 pairs.
                    // If count % 3 = 2; (count / 3) groups of triplets and 1 pair.
                minimunRound += count / 3 + 1;
        }
        return minimunRound;
    }
};

int main()
{
    vector<int> tasks = {2,2,3,3,2,4,4,4,4,4};

    Solution sol;
    cout << sol.minimumRounds(tasks) << "\n";
        
    cout<<endl;
    return 0;
}