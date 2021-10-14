/*

suppose we started traversing the both string what could be the possible case??
either characters would be same or not
as we have to find the common subseq so we would proceed when the characters are equal

what could be the possible reccurence relation ??
char at pointer p which is pointing for text1 and char at pointer q which is pointing for text2
are the equal :
curr_value=1+previous value;
here privious value is equal to common characters till the date;
 using this reccurance relation what to store in dp array??
 dp[i][j] = 1+dp[i-1][j-1]
 
 
 time complexity O(n*M)
*/
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
            
        return dp[n][m];
    }
};
