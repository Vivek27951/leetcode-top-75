class Solution {
private:
    void helper(vector<int>& nums,vector<vector<int>>& res,vector<int> temp,int index,int n){
        if(index==n){
            res.push_back(temp);
            return;
        }
        helper(nums,res,temp,index+1,n);
        temp.push_back(nums[index]);
        helper(nums,res,temp,index+1,n);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int> temp;
        int index = 0;
        int n = nums.size();
        helper(nums,res,temp,index,n);
        return res;
    }
};