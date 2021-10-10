/* Since there can be atmost 500 operations and maximum possible size of the rectangle is 100 * 100, update operation can be costly in certain cases. Using extra space to just store the updates can help.

In the below solution, all the updates made are stored separately (from original rectangle) and recently made update is returned incase of get query. If no update exist for a given cell in rectangle, then original value from original rectangle is returned.*/

class SubrectangleQueries {
vector<vector<int>> rec;
vector<vector<int>> updates;
vector<int> v;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rec = rectangle;
        v = {0,0,0,0,0};
    }    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        v[0] = row1;
        v[1] = row2;
        v[2] = col1;
        v[3] = col2;
        v[4] = newValue;
        updates.push_back(v);
    }    
    int getValue(int row, int col) {
        for(int i=updates.size()-1;i>=0;i--){
            if(row>=updates[i][0] && row<=updates[i][1] && col>=updates[i][2] && col<=updates[i][3]){
                return updates[i][4];
            }
        }
        return rec[row][col];
    }
};