class Solution {
    int helper(int i){
        int count = 0;
        while(i!=0){
            if(i&1)
                count++;
            i=i>>1;
        }
        return count;
    }
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++){
            int count = helper(i);
            v.push_back(count);
        }
        return v;
    }
};