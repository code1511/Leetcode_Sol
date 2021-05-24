class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //if only one stone is there 
        if(stones.size()==1) return stones[0];
        
        priority_queue<int>p;
        for(int i=0;i<stones.size();i++){
            p.push(stones[i]);
        }
        while(p.size()!=1){
            int x=p.top();
            p.pop();
            int y=p.top();
            p.pop();
            
            //abs because each stone has positive integer weight
            p.push(abs(x-y));
        }
        //return the last stone left
        return p.top();
    }
};
