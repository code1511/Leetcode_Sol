class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int,vector<int>>m;
        for(auto i:edges){
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        vector<int>vis(n,0);
        queue<int>q;
        vis[start]=1;
        q.push(start);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            if(curr==end)
                return true;
            for(auto i:m[curr]){
                if(vis[i]==0){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        return false;
    }
};
