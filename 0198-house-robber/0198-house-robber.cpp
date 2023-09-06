class Solution {
    int helper(vector<int>& nums,int i,vector<int>& dp){
        if(i>=nums.size()) return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        int c1 = helper(nums,i+1,dp);
        int c2 = helper(nums,i+2,dp)+nums[i];
        dp[i] = max(c1,c2);
        return dp[i];
    }
public:
    int rob(vector<int>& nums) {
        vector<int>dp(101,-1);
        return helper(nums,0,dp);
    }
};