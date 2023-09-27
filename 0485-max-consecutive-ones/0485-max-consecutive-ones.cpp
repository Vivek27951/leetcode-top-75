class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_length = 0;
        int n = nums.size();
        int s = 0;
        for(int i=0;i<n;i++){
            if(nums[s]!=1){
                s++;continue;
            }
            if(nums[i]!=1){
                max_length = max(max_length,i-s);
                s=i;
            }
        }
        if(nums[n-1]==1)
            max_length = max(max_length,n-s);
        return max_length;
    }
};