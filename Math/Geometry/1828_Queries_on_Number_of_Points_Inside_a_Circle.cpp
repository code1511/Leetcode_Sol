// For a point to be inside a circle, the euclidean distance between it and the circle's center needs to be less than or equal to the radius.
// Brute force for each circle and iterate overall points and find those inside it.

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        vector<int> sol;
        for(int i=0; i<queries.size(); i++)
        {
            int count = 0 ;
            for(int j=0; j<points.size(); j++)
            {
                int dis = (queries[i][0]-points[j][0])*(queries[i][0]-points[j][0]) + (queries[i][1]-points[j][1])*(queries[i][1]-points[j][1])- (queries[i][2]*queries[i][2]);
                if(dis<=0)
                {
                    count++;
                }
            }
            sol.push_back(count);
        
        }
        
        return sol;
        
        
        
        
        
        
        
        
    }
};