class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        
        int n = v.size();
        sort(v.begin(),v.end());
        set<vector<int>> s;
        for(int i=0;i<=n-3;i++){
            // dup check
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = v[i]+v[left]+v[right];
                if(sum==0){
                    s.insert({v[i],v[left],v[right]});
                    left++; // dup check
                    right--; // dup check
                }else if(sum<0){
                    left++;
                }else {
                    right--;
                }
            }
        }

        vector<vector<int>> res;
        for(auto x: s){
            res.push_back(x);
        }
        return res;
        
}
};