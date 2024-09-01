class Solution {
    
    void helper(vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,int idx){
        if(idx==nums.size()){
            return ans.push_back(temp);
        }
        helper(nums,ans,temp,idx+1);
        temp.push_back(nums[idx]);
        helper(nums,ans,temp,idx+1);
        temp.pop_back();
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        helper(nums,ans,temp,0);
        return ans;
    }
};