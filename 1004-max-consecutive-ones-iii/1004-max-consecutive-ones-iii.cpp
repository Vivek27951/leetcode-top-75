class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int res = 0;
        int start = 0;
        int end = 0;
        while(end<n){
            if(count==k && nums[end]==0){
                res = max(res,end-start);
                while(nums[start]!=0){
                    start++;
                }
                start++;
            }
            else if(nums[end]==0)
                count++;
            end++;
        }
        return max(res,end-start);
    }
};