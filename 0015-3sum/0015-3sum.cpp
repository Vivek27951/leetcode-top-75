class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        
        int n = v.size();
        sort(v.begin(),v.end());
        vector<vector<int>> res;
        for(int i=0;i<=n-3;i++){
            // dup check
            if(i!=0 && v[i]==v[i-1]) continue;
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = v[i]+v[left]+v[right];
                if(sum==0){
                    // s.insert({v[i],v[left],v[right]});
                    res.push_back({v[i],v[left],v[right]});
                    while(left+1<right && v[left]==v[left+1]){
                        left++  ;
                    }   
                    left++;   // -4 -1 -1 0 1 2 
                }else if(sum<0){   
                    left++; 
                }else {
                    right--; 
                }
            }
        }
        return res;
        
}
};