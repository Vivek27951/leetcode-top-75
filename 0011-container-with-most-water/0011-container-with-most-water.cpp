class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int start = 0;
        int end = n-1;
        int ans = INT_MIN;
        while(start<end){
            ans = max(ans,(end-start)*min(height[start],height[end]));
            if(height[start]<=height[end]){
                int temp = start;
                while(start<end && height[start]<=height[temp]) start++;
            }
            else{
                int temp = end;
                while(start<end && height[end]<=height[temp]) end--;
            }
        }
        return ans;
    }
};

     