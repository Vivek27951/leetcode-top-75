class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            int m = s+(e-s)/2;
            int l = m-1>=0?nums[m-1]:INT_MAX;
            int r = m+1<n?nums[m+1]:INT_MAX;
            if(l>nums[m] && nums[m]<r) return nums[m];
            if(nums[s]<=nums[m] && nums[m]>=nums[e]) s = m+1;
            else e = m-1;
        }
        return -1;
    }
};