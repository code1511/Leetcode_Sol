class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int n = words.size();
        
        int a[n][26];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<26; j++)
            {
                a[i][j] = 0;
            }
        }
        int collection[26] = {0};
        for(int i=0; i<chars.length(); i++)
        {
            collection[chars[i]-'a']++;
        }
        for(int i=0; i<words.size(); i++)
        {
            for(int j=0; j<words[i].length(); j++)
            {
                a[i][words[i][j]-'a']++;
            }
             
        }
        int count = 0;
        int sol = 0;
        for(int i=0; i<words.size(); i++)
        {    count = 0;
            for(int j=0; j<26; j++)
            {
                if(a[i][j]<=collection[j])
                {
                    count++;
                }
            }
         if(count==26)
         {
             sol += words[i].length();
         }
        }
       return sol;
        
        
    }
};