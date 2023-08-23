class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int max_candies = 0;
        for(int i=0;i<n;i++) max_candies = max(candies[i],max_candies);
        vector<bool> res(n);
        for(int i=0;i<n;i++){
            res[i]=candies[i]+extraCandies>=max_candies;
        }
        return res;
    }
};