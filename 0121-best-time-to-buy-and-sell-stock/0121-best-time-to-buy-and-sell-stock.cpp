class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> prefix(n);
        vector<int> sufix(n);
        prefix[0]=prices[0];
        sufix[n-1] = prices[n-1];
        for(int i=1;i<n;i++){
            prefix[i] = min(prefix[i-1],prices[i]);
            sufix[n-i-1] = max(sufix[n-i],prices[n-i-1]);
        }
        int res = 0;
        for(int i=0;i<n;i++){
            res = max(res,sufix[i]-prefix[i]);
        }
        return res;
    }
};