#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int l=0,r=0,n=nums.size();
        for(int i=0;i<n;++i){
             l=max(l,nums[i]);
             r+=nums[i];
        }
        
        int mid=0,ans=0;
        while(l<=r){
            mid=(l+r)/2;
            int count=0,tempsum=0;
            for(int i=0;i<n;++i){
                if(tempsum+nums[i]<=mid) 
                    tempsum+=nums[i];
                else{
                    count++;
                    tempsum=nums[i];
                }
            }
            count++; 
            if(count<=m){
                r=mid-1;
                ans=mid;
            }
            else 
                l=mid+1;
        }  
        return ans;
    }

    /*
        int splitArray(vector<int>& nums, int m){
            int start=INT_MIN;
            int end=0;
            for(int n:nums){
                start=max(n,start);
                end+=n;
            }
            
            int mid,ans;
            while(start<=end){
                mid=start+(end-start)/2;
                if(isPossible(nums,mid,m)){
                    end=mid-1;
                    ans=mid;
                }else{
                    start=mid+1;
                }
            }
            return ans;
        }
        
        bool isPossible(vector<int>&n,int mid,int m){
            int sum=0,count=1;
            for(int i=0;i<n.size();i++){
                sum+=n[i];
                if(sum>mid){
                    sum=n[i];
                    count++;
                }
                if(count>m)
                    return 0;
            }
            return 1;
        }
    */
};

int main()
{
    vector<int> nums = {7,2,5,10,8};
    int m = 2;
    
    Solution sol;
    int n=sol.splitArray(nums, m);
    cout << n << " ";
    
    cout<<endl;
    return 0;
}