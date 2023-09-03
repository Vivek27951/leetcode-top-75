class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        stack<char>ch;
        for(auto c : s){
            if(c=='*' && ch.empty()) continue;
            else if(c=='*') ch.pop();
            else ch.push(c);
        }
        string res = "";
        while(!ch.empty()){
            res+=ch.top();
            ch.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};