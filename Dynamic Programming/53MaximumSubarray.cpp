// problem - https://leetcode.com/problems/maximum-subarray/
class Solution 
{
public:
    int maxSubArray(vector<int>& arr)
    {
        int res = arr[0];
        int current_sum = arr[0];
        for(int i = 1; i < arr.size() ; i++)
        {
            current_sum = max(arr[i], current_sum + arr[i]);
            res = max(res, current_sum);
        }     
        return res;
    }
};