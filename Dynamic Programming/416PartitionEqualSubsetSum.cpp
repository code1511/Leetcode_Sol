// problem - 
class Solution
{
public:
    bool canPartition(vector<int>& nums)
    {
        int n = nums.size(), sum = 0;
        for(auto i : nums)
            sum += i;
        if(sum % 2 != 0)
            return false;
        bool part[sum/2 + 1][n+1];
        for(int i = 0 ; i <= n ; i++)
            part[0][i] = true;
        for(int i = 1; i <= sum/2 ; i++)
            part[i][0] = false;
        for(int i = 1 ; i <= sum/2 ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                part[i][j] = part[i][j-1];
                if(i >= nums[j-1])
                    part[i][j] = part[i][j] || part[i - nums[j-1]][j-1];
            }
        }
        return part[sum/2][n];
    }
};
