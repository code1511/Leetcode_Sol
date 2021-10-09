/*The problem can be thought as counting squares with projected view of shapes on all three planes
xy, yz, and xz
Now the idea is to sum up the square from all three views as you know on seeing from side we will only see the max_height block in its projection and a n*n square view from top
sum it al and you get it!!!!! */

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int N=grid.size();
        int sum=0;                                                                                         //global sum
		// ========View from x axis ===============//
        for(int i=0;i<N;i++)
        {
            int max=*max_element(grid[i].begin(),grid[i].end());            //find max element in a row
            sum+=max;                                                                          //add that to sum
        }
        //==========View from y-axis==========//
        int k=0;
        for(int i=0;i<N;i++){
            int maxel=0;
            for(int j=0;j<N;j++){
                if(grid[j][i]==0) k++;                                    //keeps track of places where no block is placed
                maxel=max(maxel,grid[j][i]);                         //maxlen is max element in a column
            }
            sum+=maxel;                                                    //adding maxlen to sum
        
        }
        //========View from z-axis=======//
		sum+=(N*N);                                        //top view has n*n squares
        sum-=k;                                               //excluding where no squares are there
		
        return sum;
    }
};