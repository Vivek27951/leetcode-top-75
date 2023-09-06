class Solution {
    int helper(vector<int>& cost,int i,vector<int>& dp){
        if(i==cost.size()-1 || i==cost.size()-2)
            return cost[i];
        int ct = 0;
        if(i!=-1)
            ct+=cost[i];
        if(dp[i+1]==-1)
            dp[i+1] = helper(cost,i+1,dp);
        if(dp[i+2]==-1)
            dp[i+2] = helper(cost,i+2,dp);
        ct+=min(dp[i+1],dp[i+2]);
        return ct;
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(1000,-1);
        return helper(cost,-1,dp);
    }
};