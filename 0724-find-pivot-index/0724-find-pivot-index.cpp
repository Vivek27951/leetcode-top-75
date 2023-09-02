class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = accumulate(nums.begin(),nums.end(),0);
        int left = 0;
        for(int i=0;i<n;i++){
            if(2*left==total-nums[i]) return i;
            left+=nums[i];
        }
        return -1;
    }
};