class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_ans = INT_MIN;
        int curr_ans = 0;
        for(int i=0;i<nums.size();i++){
            curr_ans+=nums[i];
            max_ans = max(max_ans,curr_ans);
            if(curr_ans<0) curr_ans = 0;
        }
        return max_ans;
    }
};