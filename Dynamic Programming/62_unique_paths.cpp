class Solution {
public:
    int uniquePaths(int m, int n) {
        int p[m][n];
        p[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0)
                    p[i][j]=1;
                else{
                    p[i][j]=p[i-1][j]+p[i][j-1];
                }
            }
        }
        return p[m-1][n-1];
    }
};
