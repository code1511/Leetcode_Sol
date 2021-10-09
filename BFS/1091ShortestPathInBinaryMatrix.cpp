class Solution {
public:
    bool isSafe(int i, int j, vector<vector<bool>> &vis, vector<vector<int>> &grid)
    {
        return i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size() && !vis[i][j] && !grid[i][j];
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid)
    {
        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));
        static int rows[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
        static int cols[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
        if(grid[0][0] || grid[grid.size()-1][grid[0].size()-1])
            return -1;
        queue<pair<int, int>> q;
        q.push({0, 0});
        vis[0][0] = 1;
        int res = 0;
        while(!q.empty())
        {
            int qsize = q.size();
            res++;
            while(qsize--)
            {
                int i = q.front().first, j = q.front().second;
                q.pop();
                if(i == grid.size()-1 && j == grid[0].size()-1)
                    return res;
                for(int k = 0 ; k < 8 ; k++)
                {
                    if(isSafe(i+rows[k], j+cols[k], vis, grid))
                    {
                        q.push({i+rows[k], j+cols[k]});
                        vis[i+rows[k]][j+cols[k]] = 1;
                    }
                }
            }
        }
        return -1;
    }
};
