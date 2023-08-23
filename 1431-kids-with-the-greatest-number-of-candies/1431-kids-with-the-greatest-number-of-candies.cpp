class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = *max_element(candies.begin(),candies.end());
        vector<bool> res;
        for(int candie : candies){
            res.push_back(candie+extraCandies>=maxi ? true : false);
        }
        return res;
    }
};