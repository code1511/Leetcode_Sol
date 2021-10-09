// Put people's IDs with same groupSize into buckets, then split each bucket into groups.
//Greedy fill until you need a new group.

class Solution {
public:

    vector<vector<int>> groupThePeople(vector<int>& a) {
        unordered_map<int, vector<int>> m;
        vector<vector<int>> sol;
        for(int i=0; i<a.size(); i++)
        {
            m[a[i]].push_back(i);
        }
        for(auto i: m)
        {
            int group = (i.second.size())/i.first;
             int k=0;
            while(group--)
            {
                vector<int> v;
                for(int j=0; j<i.first; j++)
                {
                    v.push_back(i.second[k]);
                    k++;
                    
                }
                sol.push_back(v);
            }
        }
        return sol;
    }
};