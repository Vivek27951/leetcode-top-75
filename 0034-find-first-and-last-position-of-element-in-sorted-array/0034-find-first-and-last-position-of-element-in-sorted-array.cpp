class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int i = -1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(nums[m]==target){
                i=m;
                e=m-1;
            }else if(nums[m]<target) s = m+1;
            else e = m-1;
        }
        if(i==-1) return {-1,-1};
        vector<int>v;
        v.push_back(i);
        s = 0;
        e = n-1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(nums[m]==target){
                i=m;
                s = m+1;
            }else if(nums[m]<target) s = m+1;
            else e = m-1;
        }
        v.push_back(i);
        return v;
        
    }
};