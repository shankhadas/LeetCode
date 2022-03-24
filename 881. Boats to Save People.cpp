#include <bits/stdc++.h>

using namespace std;

/*
    Time Complexity :- BigO(NlogN)
    Space COmplexity :- BigO(1)
*/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boatCount = 0;
        sort(people.begin(), people.end());
        int left = 0, right = people.size() - 1;
        while(left <= right){
            if(people[left] + people[right] <= limit){
                left++;
                right--;
            } else{
                right--;
            }
            boatCount++;
        }
        return boatCount;
    }
};

int main()
{
    vector<int> people = {3,5,3,4};
    int limit = 5;
    
    Solution sol;
    int n=sol.numRescueBoats(people, limit);
    
    cout << n << " ";
    
    cout<<endl;
    return 0;
}