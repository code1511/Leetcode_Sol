class Solution {
public:
    int a[26] = {0};
   
    string longestCommonPrefix(vector<string>& s) {
     
       int min = INT_MAX;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i].length()< min)
            {
                min = s[i].length();
            }
        }
         string sol = "";
        
        for(int i=0; i<min; i++)
        {
            char temp = s[0][i];
            int count = 0;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j][i]==temp)
                count++;
            
            
            
        }
            if(count==s.size())
            {
                sol += temp;
            }
            else
            {
                break;
            }
            
        }
        
        
        return sol;
        
        
        
        
    }
};