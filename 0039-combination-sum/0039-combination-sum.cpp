class Solution {
    
    void helper(vector<int>& candidates,vector<vector<int>>& ans,vector<int>& temp,int target,int idx){
        if(target<0 || idx==candidates.size()) return;
        if(target==0){
            ans.push_back(temp);
            return;
        }
        temp.push_back(candidates[idx]);
        helper(candidates,ans,temp,target-candidates[idx],idx);
        temp.pop_back();
        helper(candidates,ans,temp,target,idx+1);
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> temp;
        helper(candidates,ans,temp,target,0);
        return ans;
    }
};