class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int prefix[n];
        prefix[0]=height[0];
        int suffix[n];
        suffix[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],height[i]);
            suffix[n-1-i]=max(suffix[n-i],height[n-1-i]);
        }
        int start = 0, end = n-1;
        int ans = INT_MIN;
        while(start<end){
            ans = max(ans,(end-start)*min(prefix[start],suffix[end]));
            if(prefix[start]<=suffix[end])
                start++;
            else
                end--;
            
        }
        return ans;
    }
};

     