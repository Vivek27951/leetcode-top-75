class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            int m = (e-s)/2 + s;
            if((m==0 || nums[m-1]<nums[m]) && (m==n-1 || nums[m+1]<nums[m]))
                return m;
            if((m==0 || nums[m-1]<nums[m]) && (m==n-1 || nums[m+1]>nums[m]))
                s=m+1;
            else
                e=m-1;
        }
        return 0;
    }
};