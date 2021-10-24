/*
Approach one 
simply check eahc digits are in increasing order or not
Time Complexity- O(N^2)
space Complexity-O(1)
but this would give TLE for large data set
*/
class Solution {
public:
    bool check(int n){
        vector<int>v;
        while(n>0){
           int d=n%10;
            v.push_back(d);
            n=n/10;
        }

        reverse(v.begin(),v.end());
       for(int i=1;i<v.size();i++){
           if(v[i-1]>v[i])
               return false;
       }     
        return true;
        
    }
    int monotoneIncreasingDigits(int n) {
        for(int i=n;i>0;i--){
            if(check(i)){
                return i;
            }
        }
        
        return 0;
    }
};


//optimization
/*
we can form max number with n digit is 99999............999999999;
using all 9
*/
class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        
        string s=to_string(n);
        int mark=s.size();
        for(int i=s.size()-1;i>0;i--){
            if(s[i-1]>s[i]){
                mark=i;
                s[i-1]=s[i-1]-1;
            }
        }
        for(int i=mark;i<s.size();i++){
            s[i]='9';
        }
        return stoi(s);
    }
};
