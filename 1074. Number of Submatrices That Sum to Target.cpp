//
// Created by das on 28/1/24.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size(),count=0;
        vector<vector<int>>temp(n+1,vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp[i+1][j]=temp[i][j]+matrix[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                for(int k=0;k<m;k++){
                    int sum=0;
                    for(int l=k;l<m;l++){
                        sum+=temp[j][l]-temp[i][l];
                        if(sum==target){
                            // cout<<j<<" "<<i<<" "<<k<<endl;
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};

int main() {
    vector<vector<int>> matrix = {{0,1,0},{1,1,1},{0,1,0}};
    int target = 0;

    Solution sol;
    int res=sol.numSubmatrixSumTarget(matrix, target);

    cout << res << endl;

    cout<<endl;
    return 0;
}