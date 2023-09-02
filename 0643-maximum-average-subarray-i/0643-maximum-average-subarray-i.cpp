class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double res = accumulate(nums.begin(),nums.begin()+k,0);
        double temp =res;
        for(int i=k;i<n;i++){
            temp = temp-nums[i-k]+nums[i];
            if(temp>res) res = temp;
        }
        return res/k;
    }
};
