// problem - https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden/
class Solution {
public:
    int minTaps(int n, vector<int>& ranges) 
    {
        vector<int> arr(n + 1, n + 2);
        arr[0] = 0;
        for(int i = 0 ; i <= n; i++)
        {
            for(int j = max(i - ranges[i] + 1, 0) ; j <= min(i + ranges[i], n) ; j++)
                arr[j] = min(arr[j], arr[max(0, i - ranges[i])] + 1);
        }
        return arr[n] < n + 2 ? arr[n] : -1;
    }
};
