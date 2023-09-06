class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        int s = 0;
        int e = n-1;
        while(s<e){
            int m = (e-s)/2 + s;
            if(nums[m]<nums[m+1])
                s = m+1;
            else
                e = m;
        }
        return s;
    }
};