#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> counts;
        vector<int> vec;
        for (auto n : arr) {
            counts[n]++;
        }
        for (auto p: counts) {
            vec.push_back(p.second);
        }
        make_heap(vec.begin(), vec.end(), greater<int>());
        while (k > 0) {
            k -= vec.front();

            pop_heap(begin(vec), end(vec), greater<int>()); 

            if (k >= 0)
                vec.pop_back();
        }
        return vec.size();


        /*
            unordered_map<int,int> freqmap;
            priority_queue<int,vector<int>,greater<int>> minpq; 
            for(int n: arr)
            {
                freqmap[n]++;
            }
            
            for(auto it = freqmap.begin();it != freqmap.end();it++)
            {
                minpq.push(it->second);
            }
            while(k > 0)
            {
                k -= minpq.top();
                if(k >= 0)
                    minpq.pop();
                    
            }
            return minpq.size();
        */
    }
};

int main()
{
    vector<int> v = {5,5,4};
    int k = 1;
    Solution sol;
    int n=sol.findLeastNumOfUniqueInts(v, k);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}