class Solution {
    long helper(vector<int>& piles, int m){
        long count = 0;
        for(int i=0;i<piles.size();i++){
            count+=((piles[i]+m-1)/m);
        }
        return count;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        if(n==1) return ceil((piles[0]*1.0)/h);
        int s = 1;
        int e = *max_element(piles.begin(),piles.end());
        int k = e;
        while(s<e){
            int m = (e-s)/2 + s;
            long count = helper(piles,m);
            if(count<=h){
                e = m;
            }else
                s=m+1;
        }
        return s;
    }
};