class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int totalProduct = 1;
        int count = 0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                totalProduct *= nums[i];
            if(nums[i]==0)
                count++;
        }
        for(int i=0;i<n;i++){
            if(count>=2 || (count==1 && nums[i]!=0))
                nums[i]=0;
            else if(count==1 && nums[i]==0)
                nums[i] = totalProduct;
            else
                nums[i] = totalProduct/nums[i];
        }
        return nums;
    }
};