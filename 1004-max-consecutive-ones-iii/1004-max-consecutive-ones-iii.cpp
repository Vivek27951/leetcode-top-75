class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = 0;
        int start = 0;
        int end = 0;
        while(end<nums.size()){
            if(k==0 && nums[end]==0){
                res = max(res,end-start);
                while(nums[start]!=0){
                    start++;
                }
                start++;
            }
            else if(nums[end]==0)
                k--;
            end++;
        }
        return max(res,end-start);
    }
};