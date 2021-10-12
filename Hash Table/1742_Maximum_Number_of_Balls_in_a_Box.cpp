class Solution {
public:
    int sum(int n)
    {  
        int total = 0;
        while(n != 0)
        {
            total += n%10;
            n = n/10;
        }
      return total;
    }
    int countBalls(int lowLimit, int highLimit) {
        
        int sol[1000] = {0};
        
        
        for(int i=lowLimit; i<=highLimit; i++)
        {
            sol[sum(i)]++;
            
            
            
            
            
        }
        
        return *max_element(sol, sol+1000);
        
        
        
    }
};