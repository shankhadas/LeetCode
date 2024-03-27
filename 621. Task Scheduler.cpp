//
// Created by das on 27/3/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};

        for(char task : tasks){
            freq[task - 'A']++;
        }

        sort(begin(freq) , end(freq));

        int chunk = freq[25] - 1;
        int idel = chunk * n;

        for(int i=24; i>=0; i--){
            idel -= min(chunk,freq[i]);
        }

        return idel < 0 ? tasks.size() : tasks.size() + idel;
    }
};

int main() {
    vector<char> tasks = {'A','A','A','B','B','B'};
    int n = 2;

    Solution sol;
    int res=sol.leastInterval(tasks, n);

    cout << res <<" ";

    cout<<endl;
    return 0;
}
