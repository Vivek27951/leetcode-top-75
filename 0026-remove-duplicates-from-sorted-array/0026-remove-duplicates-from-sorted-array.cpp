class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int curr = 0;
        for(int i=0;i<n;i++){
            if(nums[curr]!=nums[i]){
                curr++;
                nums[curr] = nums[i];
            }
        }
        if(nums[curr]!=nums[n-1]){
                curr++;
                nums[curr] = nums[n-1];
        }
        return curr+1;
        
    }
};