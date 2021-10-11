class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        int count = 0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]==target[i])
            {
                count++;
            }
        }
        if(count==arr.size())
            return true;
        else
            return false;
        
        
        
    }
};