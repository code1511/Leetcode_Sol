class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<int>& v, vector<vector<int>>& ans,int curr){
        v.push_back(curr);
        if(curr==graph.size()-1){
            ans.push_back(v);
        }
        for(auto i:graph[curr]){
           dfs(graph,v,ans,i);
        }
        v.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>v;
        int curr=0;
        int end=graph.size()-1;
        dfs(graph,v,ans,curr);
            return ans;
    }
};
