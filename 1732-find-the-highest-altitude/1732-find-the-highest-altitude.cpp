class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = 0;
        int temp = 0;
        for(int num : gain){
            temp+=num;
            res=max(res,temp);
        }
        return res;
    }
};