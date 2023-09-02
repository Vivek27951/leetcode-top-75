class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = 0;
        int res = 0;
        bool flag = false;
        while(end<n){
            if(flag && nums[end]==0){
                res = max(res,end-start);
                while(nums[start]!=0)start++;
                start++;
            }else if(nums[end]==0)
                flag=true;
            end++;
        }
        res = max(res,end-start);
        return res-1;
    }
};