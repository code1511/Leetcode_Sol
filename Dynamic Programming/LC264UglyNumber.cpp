class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=0) return 0;
        if(n==1) return 1;
        int a=0,b=0,c=0;
        vector<int>dp(n);
        
        dp[0]=1;
        
        // dp[0]=1 because 1 has no prime factors,
        // therefore all of its prime factors are limited to 2, 3, and 5.
        
        for(int i=1;i<n;i++){
            
            dp[i]=min(dp[a]*2,min(dp[b]*3,dp[c]*5));
            
//             check for multiple of 2 3 5 
            if(dp[i]==dp[a]*2)a++;
            if(dp[i]==dp[b]*3)b++;
            if(dp[i]==dp[c]*5)c++;
        }
        return dp[n-1];
    }
};
