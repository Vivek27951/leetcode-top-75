class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix(n);
        vector<int> sufix(n);
        prefix[0] = height[0];
        sufix[n-1] = height[n-1];
        for(int i=1;i<n;i++){
            prefix[i] = max(prefix[i-1],height[i]);
            sufix[n-i-1] = max(sufix[n-i],height[n-i-1]);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans+=(min(prefix[i],sufix[i])-height[i]);
        }
        return ans;
    }
};