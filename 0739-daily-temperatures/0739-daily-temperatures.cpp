class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>v(n,0);
        stack<int>s;
        s.push(n-1);
        for(int i=n-2;i>=0;i--){
            int num = temperatures[i];
            while(!s.empty() && num>=temperatures[s.top()])
                s.pop();
            if(!s.empty())
                v[i] = s.top()-i;
            s.push(i);
        }
        return v;
    }
};