class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        for(auto x: s){
            if(st.empty() || x=='(') st.push(x);
            else{
                if(st.top()=='(') st.pop();
                else st.push(x);
            }
        }
        return st.size();
    }
};