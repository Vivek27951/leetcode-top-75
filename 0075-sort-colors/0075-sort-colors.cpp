class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int c = 0;
        while(c<=e){
            if(nums[c]==0){
                swap(nums[c],nums[s++]);
                if(nums[c]==0) c++;
            }else if(nums[c]==2){
                swap(nums[c],nums[e--]);
            }else c++;
        }
    }
};