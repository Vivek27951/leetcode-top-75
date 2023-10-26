class Solution {
private:
    void helper(vector<int>& candidates,set<vector<int>>& resSet,vector<int>& temp,
                int index,int n,int sum,int target){
        if(sum==target){
            resSet.insert(temp);
            return;
        }
        if(index>=n || sum>target) return;
        
        temp.push_back(candidates[index]);
        helper(candidates,resSet,temp,index,n,sum+candidates[index],target);
        temp.pop_back();
        helper(candidates,resSet,temp,index+1,n,sum,target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>>resSet;
        vector<int> temp;
        int n = candidates.size();
        int index = 0;
        int sum = 0;
        helper(candidates,resSet,temp,index,n,sum,target);
        vector<vector<int>> res;
        for(auto x:resSet){
            res.push_back(x);
        }
        return res;
    }
};