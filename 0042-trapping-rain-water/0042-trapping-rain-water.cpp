class Solution {
public:
    vector<int> nextGreater(vector<int> arr){
        int n = arr.size();
        vector<int> nge(n, -1);
        int maxi = arr[0];
        for(int i=0; i<n; i++){
            nge[i]=maxi;
            if(arr[i]>maxi) maxi = arr[i];
        }
        return nge;
    }
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> pre = nextGreater(height);
        vector<int> clone = height;
        reverse(clone.begin(), clone.end());
        vector<int> suff = nextGreater(clone);
        reverse(suff.begin(), suff.end());
        int res = 0;
        for(int i=0; i<n; i++){
            if(min(pre[i], suff[i])-height[i]<0)    continue;
            else res += min(pre[i], suff[i])-height[i];
        }
        return res;
    }
};