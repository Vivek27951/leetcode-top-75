class Solution {
    void helper(set<vector<int>>& s,vector<int>& v,int n,int i,vector<int>& candidates,int target,int sum){
        
        if(sum==target) {
            s.insert(v);
            return;
        }
        if(i==n || sum>target) return;
        
        v.push_back(candidates[i]);
        helper(s,v,n,i,candidates,target,sum+candidates[i]);
        v.pop_back();
        helper(s,v,n,i+1,candidates,target,sum);
    }
       
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>>s;
        int n = candidates.size();
        vector<int>v;
        int sum = 0;
        helper(s,v,n,0,candidates,target,sum);
        vector<vector<int>> res;
        for(auto x : s){
            res.push_back(x);
        }
        return res;
    }
};