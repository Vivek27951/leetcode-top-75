class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int res = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        for(int i=0;i<n;i++){
            int t = k-nums[i];
            if(t!=nums[i] && mp[t]>0 && mp[nums[i]]>0){
                res++;
                mp[t]--;
                mp[nums[i]]--;
            }
            else if(t==nums[i] && mp[t]>=2){
                res++;
                mp[t]-=2;
            }
        }
        return res;
    }
};