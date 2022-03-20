#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int size = tops.size();
        vector<int>tVal(7), bVal(7), sameVal(7);   // because from description 
        for(int i=0; i<size; i++){                 // (A domino is a tile with two numbers 
            tVal[tops[i]]++;                       // from 1 to 6 - one on each half of the tile.)
            bVal[bottoms[i]]++;
            if(tops[i] == bottoms[i])
                sameVal[tops[i]]++;
        }
        int minRotations = INT_MAX;
        for(int i=1; i<=6; i++){                     // same 
            if(tVal[i] + bVal[i] - sameVal[i] == size)
                minRotations = min(minRotations, min(tVal[i], bVal[i]) - sameVal[i]);
        }
        return minRotations == INT_MAX ? -1 : minRotations;
    }
};

int main()
{
    vector<int> tops    = {1,2,1,1,1,2,2,2};
    vector<int> bottoms = {2,1,2,2,2,2,2,2};
    
    Solution sol;
    int n=sol.minDominoRotations(tops, bottoms);
    cout<<n<<" ";
    
    cout<<endl;
    return 0;
}