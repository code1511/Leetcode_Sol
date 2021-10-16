//https://leetcode.com/problems/shortest-path-in-binary-matrix/discuss/1523978/BFS-oror-C%2B%2B

class Solution {
public:
    bool isValid(int& x,int& y,int& n,int& m){
        return (x>=0 && x<m && y>=0 && y<m);
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        //to move in eight directions
    vector <vector <int>> moves = {{-1,-1}, {-1, 0}, {-1, 1}, {0, -1},{0, 1}, {1, -1}, {1, 0}, {1, 1}};
        
        int m=grid.size();
        int n=grid[0].size();
        
        
        if(grid[0][0]==1 || grid[n-1][m-1]==1)
            return -1;
        
        //taking three value i,j,currpathalue in the queue
        queue<vector<int>>q;
        
        //push the first index 0,0 with the path value 1
        q.push({0,0,1});
        
        
        while(!q.empty()){
            vector<int>top=q.front();
            q.pop();
            
            if(top[0]==m-1 && top[1]==n-1){ //we reached the destination
                return top[2];
            }
            
            //we have to check for each value
            for(auto i:moves){
                //checking for other direction 
                int a=top[0]+i[0];
                int b=top[1]+i[1];
                
                if(isValid(a,b,n,m) && grid[a][b]==0){
                    //marking the index as visited
                    grid[a][b]=1;
                    q.push({a,b,top[2]+1});
                }
            }
            
        }
        return -1;
    }
};
