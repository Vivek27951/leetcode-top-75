class Solution {
public:
    bool solve(int i,int j,string &s,string &p,vector<vector<int>> &dp)
    {
        if(i>=s.size()&& j >= p.size())
        {
            return true;
        }
        if(j>=p.size())
        {
            return false;
        }
        if(i >= s.size())
        {
            while(j<p.size())
            {
                if(p[j]!='*') return false;
                j++;
            }
            return true;
        }
        //base cases
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i] == p[j]||p[j] == '?')
        {
            return dp[i][j] = solve(i+1,j+1,s,p,dp);
        }
        int use = false,not_use = false;
        if(p[j] == '*')
        {
            //pick and not pick,we either pick it ans see where we can go
            //or not pick it at all
            use = solve(i+1,j,s,p,dp);
            not_use = solve(i,j+1,s,p,dp);

        }
        return dp[i][j] = use||not_use;
    }
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.size(),vector<int> (p.size(),-1));
        return solve(0,0,s,p,dp);
    }
};