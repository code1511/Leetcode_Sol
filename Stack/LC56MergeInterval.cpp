//https://leetcode.com/problems/merge-intervals/discuss/1526485/stack-based-approach-c
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& m) {
       if(m.size()<=1) return m;
        sort(m.begin(),m.end());
        stack<pair<int,int>>s;
        s.push({m[0][0],m[0][1]});
        for(int i=1;i<m.size();i++){
            
            pair<int,int>top=s.top();
            if(top.second<m[i][0]){
                s.push({m[i][0],m[i][1]});
            }
            else if(top.second<m[i][1]){
                int t=top.first;
                s.pop();
                s.push({t,m[i][1]});
            }
        }
       
        vector<vector<int>> ans;
        while(!s.empty()){
            ans.push_back({s.top().first,s.top().second});
            s.pop();
        }
        return ans;
    }
};
