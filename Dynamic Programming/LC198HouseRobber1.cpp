//https://leetcode.com/problems/house-robber/discuss/1517732/Runtime%3A-0-ms-faster-than-100.00-of-C%2B%2B-oror-DP-Approach
class Solution {
public:
    int rob(vector<int>& nums) {
      int size=nums.size();
      vector<int>dp(size+1,-1);
       return fun(nums,nums.size()-1,dp);
    }
    int fun(vector<int>& nums,int n ,vector<int>& dp){
        if(n<0)
            return 0;
       if(dp[n]>=0){
           return dp[n];
       }
        int res=max(fun(nums,n-2,dp)+nums[n],fun(nums,n-1,dp));
        dp[n]=res;
        return res;
    }
};
