
// main point is the movement with step in this question 

class Solution {
public:
    string convert(string s, int num) {
        if(num<=1) return s;
        int n=s.size();
        vector<string>v(num,"");
        for(int i=0,row=0,step=1;i<n;i++){
            v[row]+=s[i];
            if(row==0) step=1;
            if(row==num-1)
                step=-1;
            
            row+=step;
        }
        string t="";
        for(auto i:v)
            t+=i;
        return t;
    }
};
