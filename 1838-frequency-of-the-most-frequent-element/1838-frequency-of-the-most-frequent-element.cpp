class Solution {
   
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long n = nums.size();
        long s = 0;
        long e = 0;
        long res = 1;
        long sum = 0;
        while(e<n){
            sum+=nums[e];
            long d = e-s+1;
            long t = d*nums[e];
            if(sum+k>=t){
                res = max(res,d);
                e++;
            }else{
                while(sum+k<d*nums[e]){
                    sum-=nums[s];
                    s++;
                    d--;
                }
                e++;
            }
        }
        return res;
    }
};

