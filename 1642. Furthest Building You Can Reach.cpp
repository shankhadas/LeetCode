#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> maxB;   // Priority Queue for storing the bricks used in each step in decreasing order (Max at top)
        int i=0, diff =0;           // i is used for storing the position and diff for storing difference.
        for(i=0; i<heights.size()-1; i++){      // go till before the last building.
            diff = heights[i+1]-heights[i];     //difference of the height of corresponding buildings
            if(diff <= 0){                      //If next building is equal or samaller than current then go to next building.
                continue;
            }
            bricks -= diff;                     //taking the bricks needed for going to next building.
            maxB.push(diff);                    //adding the number of bricks used in priority queue.
            
            if(bricks < 0){
                bricks += maxB.top();           //taking back bricks from that step
                maxB.pop();                     //As max bricks were removed so pop
                ladders--;                      //1 ladder used
            }
            if(ladders < 0) break;              //if ladder is negetive then the ladder was not provided to go to next building. So we can't proceed.
        }
        return i;                               // return the present position.
    }
};

int main()
{
    vector<int> heights = {4,2,7,6,9,14,12};
    int bricks = 5, ladders = 1;
    
    Solution sol;
    int res=sol.furthestBuilding(heights, bricks, ladders);
    cout << res << " ";
    
    cout<<endl;
    return 0;
}