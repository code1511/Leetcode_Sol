class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
      string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> sol;
        for(int i=0; i<words.size(); i++)
        {     string s = "";
            for(int j=0; j<words[i].size(); j++)
            {
                s += arr[words[i][j]-'a'];
            }
            sol.insert(s);
         
        }
        return sol.size();
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};