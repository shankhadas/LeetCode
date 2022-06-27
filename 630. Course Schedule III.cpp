#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static bool myComp(const vector<int>& vec1, const vector<int>& vec2){
        return vec1[1] < vec2[1];
    }

    int scheduleCourse(vector<vector<int>>& courses) {
        if(courses.size() <= 0) return 0;
        sort(courses.begin(), courses.end(), myComp);
        priority_queue<int> q;
        int sum = 0;
        for(auto i : courses) {
            sum += i[0];
            q.push(i[0]);
            if(sum > i[1]) {
                sum -= q.top();
                q.pop();
            }
        }
        return q.size();
    }
};

int main()
{
    // vector<vector<int>> courses = {{100,200},{200,1300},{1000,1250},{2000,3200}};
    vector<vector<int>> courses = {{5,15},{3,19},{6,7},{2,10},{5,16},{8,14},{10,11},{2,19}};
    
    Solution sol;
    int res=sol.scheduleCourse(courses);
    cout << res << " ";
    
    cout<<endl;
    return 0;
}