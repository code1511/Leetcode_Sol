// problem : https://leetcode.com/problems/largest-number/submissions/
class Solution {
public:
    static bool comp(int n1, int n2)
    {
        return to_string(n1)+to_string(n2) > to_string(n2)+to_string(n1);
    }
    string largestNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end(), comp);
        string res = "";
        for(auto it : nums)
            res += to_string(it);
        return res[0] == '0' ? "0" : res;
    }
};
