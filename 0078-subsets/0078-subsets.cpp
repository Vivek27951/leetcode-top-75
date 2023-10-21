class Solution {
private:
    void helper(vector<vector<int>>& res,vector<int>& v,int n,int i,vector<int>& nums){
        if(i==n){
            res.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        helper(res,v,n,i+1,nums);
        v.pop_back();
        helper(res,v,n,i+1,nums);
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        vector<int> v;
        helper(res,v,n,0,nums);
        return res;
    }
};