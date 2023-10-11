class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        set<vector<int>>t_set;
        for(int i=0;i<n;i++){
            if (i != 0 && nums[i] == nums[i - 1]) continue;
                int s = i+1;
                int e = n-1;
                while(s<e){
                    int m = (s+e)/2;
                    int sum = nums[i]+nums[s]+nums[e];
                    if(sum==0){
                        vector<int> v = {nums[i],nums[s],nums[e]};
                        t_set.insert(v);
                        s++;
                        e--;
                        while (s < e && nums[s] == nums[s - 1]) s++;
                        while (s < e && nums[e] == nums[e + 1]) e--;
                    }else if(sum>0) e--;
                    else s++;
                }
            }
        for(auto x:t_set) res.push_back(x);
        return res;
    }
};