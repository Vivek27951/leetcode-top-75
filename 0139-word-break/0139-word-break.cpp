class Solution {
public:
    int helper(string A,unordered_map<string,int>& mp,int p,vector<int>& dp){
        if(p==A.size()) return 1;
        if(dp[p]!=-1) return dp[p];
        string temp = "";
        for(int i=p;i<A.size();i++){
            temp+=A[i];
            if(mp.find(temp)!=mp.end()){
                if(helper(A,mp,i+1,dp)) return dp[p] = 1;
            }
        }
        return dp[p] = 0;
    }
    
    bool wordBreak(string A, vector<string>& B) {
        int n = B.size();
        unordered_map<string,int> mp;
        vector<int> dp(A.size()+1,-1);
        for(int i=0;i<n;i++){
            mp[B[i]]++;
        }
        return helper(A,mp,0,dp)==1?true:false;
    }
};