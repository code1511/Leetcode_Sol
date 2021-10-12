class Solution {
public:
    int decode(string s, int n, int i, int dp[])
    {
        if(i >= n)
            return 1;
        if(dp[i] != -1)
            return dp[i];
        if(i == n-1)
            return dp[i] = decode(s, n, i+1, dp);
        if(s[i+1] == '0')
            return dp[i] = decode(s, n, i+2, dp);
        else if(i < n-2 && (s[i+2] == '0'))
            return dp[i] = decode(s, n, i+1, dp);
        else if(s[i] == '1' || s[i] == '2' && s[i+1] < '7')
            return dp[i] = decode(s, n, i+1, dp) + decode(s, n, i+2, dp);
        else
            return dp[i] = decode(s, n, i+1, dp);
    }
    int numDecodings(string s)
    {
        int n = s.length();
        int dp[n];
	    memset(dp, -1, sizeof(dp));
	    int res = -1;
	    for(int i = 0 ; i < n ; i++)
	    {
	        if(s[i] == '0' && (i == 0 || s[i-1] > '2' || s[i-1] == '0'))
	        {
	            res = 0;
	            break;
	        }
	    }
	    if(res != 0)
	        res = decode(s, n, 0, dp);
        return res;
    }
};