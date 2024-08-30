class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return;
        int i = n-2;
        while(i>=0 && nums[i]>=nums[i+1])i--;
        if(i==-1){
            reverse(nums.begin(),nums.end());
        }else{
            int j = n-1;
            while(nums[j]<=nums[i])j--;
            swap(nums[i],nums[j]);
            sort(nums.begin()+i+1,nums.end());
        }
    }
};