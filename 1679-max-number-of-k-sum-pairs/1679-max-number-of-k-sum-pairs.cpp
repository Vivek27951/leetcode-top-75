class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int start = 0;
        int end = n-1;
        int res = 0;
        while(start<end){
            if(nums[start]+nums[end]==k){
                res++;
                start++;
                end--;
            }
            else if(nums[start]+nums[end]<k)
                start++;
            else
                end--;
        }
        return res;
    }
};