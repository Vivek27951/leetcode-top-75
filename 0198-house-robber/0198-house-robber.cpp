class Solution {
    int helper(vector<int>& nums,int i,vector<int>& dp){
        if(i>=nums.size()) return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        // if(dp[i+1]==-1)
            dp[i+1] = helper(nums,i+1,dp);
        // if(dp[i+2]==-1)
            dp[i+2] = helper(nums,i+2,dp)+nums[i];
        return max(dp[i+1] ,dp[i+2]);
    }
public:
    int rob(vector<int>& nums) {
        vector<int>dp(102,-1);
        return helper(nums,0,dp);
    }
};