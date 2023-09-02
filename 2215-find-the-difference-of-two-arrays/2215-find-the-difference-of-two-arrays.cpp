class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i1=0,i2=0;
        vector<vector<int>> res(2,vector<int>());
        while(i1<n && i2<m){
            if(nums1[i1]<nums2[i2]){
                if(i1==0 || nums1[i1]!=nums1[i1-1])
                    res[0].push_back(nums1[i1]);
                i1++;
            }else if(nums1[i1]>nums2[i2]){
                if(i2==0 || nums2[i2]!=nums2[i2-1])
                    res[1].push_back(nums2[i2]);
                i2++;
            }
            else{
                i1++;i2++;
            }
        }
        while(i1<n){
            if(i1==0 || nums1[i1]!=nums1[i1-1])
                res[0].push_back(nums1[i1]);
            i1++;
        }
        while(i2<m){
            if(i2==0 || nums2[i2]!=nums2[i2-1])
                res[1].push_back(nums2[i2]);
            i2++;
        }
        return res;
    }
};