class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int s = i+1;
            int e = n-1;
            while(s<e){
                int sum = nums[i]+nums[s]+nums[e];
                if(sum==0){
                    res.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1]) s++;
                    // while(s<e && nums[e]==nums[e-1]) e--;
                    s++;
                }else if(sum<0) s++;
                else e--;
            }
            while(i<n-2 && nums[i]==nums[i+1]) i++;
        }
        return res;
    }
};