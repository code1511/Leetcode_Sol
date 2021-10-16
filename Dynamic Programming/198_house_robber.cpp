class Solution {
public:
    int rob(vector<int>& nums) {
        int k=nums.size();
        if(k==0)
            return 0;
        if(k==1)
            return nums[0];
        int a[k];
        a[0]=nums[0];
        a[1]=a[0]>nums[1]?a[0]:nums[1];
        for(int i=2;i<k;i++){
            a[i] = a[i-1]>(a[i-2]+nums[i])?a[i-1]:a[i-2]+nums[i];
        }
        return a[k-1];
    }
};
