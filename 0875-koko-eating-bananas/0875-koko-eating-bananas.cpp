class Solution {
private : 
    long helper(vector<int>& piles, int m){
        long count = 0;
        for(int i=0;i<piles.size();i++){
            count += ceil(piles[i]*1.0/m);
        }
        return count;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int s = 1;
        int e = *max_element(piles.begin(),piles.end());
        int k = -1;
        while(s<=e){
            int m = s + (e-s)/2;
            long time = helper(piles,m);
            if(time<=h){
                k = m;
                e = m-1;
            }else s = m+1;
        }
        return k;
        
    }
};