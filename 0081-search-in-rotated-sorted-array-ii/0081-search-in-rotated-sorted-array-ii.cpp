class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            while(s<e && nums[s]==nums[s+1]) s++;
            while(s<e && nums[e]==nums[e-1]) e--;
            int m = s+(e-s)/2;
            if(nums[m]==target) return true;
            else if(nums[s]<=nums[m]){
                if(nums[s]<=target && target<nums[m]) e = m-1;
                else    s = m+1;
            }else{
                if(nums[m]<target && target<=nums[e]) s = m+1;
                else e = m-1;
            }
        }
        return false;
    }
};