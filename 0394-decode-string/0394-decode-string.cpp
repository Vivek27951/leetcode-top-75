class Solution {
    
    
    
    
    
    
    
    
public:
    string decodeString(string s) {
        stack<int>num;
        stack<string>st;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                st.push(string(1,s[i]));
            }else if(s[i]=='[')
                st.push("[");
            else if(s[i]==']'){
                string temp = "";
                while(st.top()!="["){
                    temp = st.top()+temp;
                    st.pop();   
                }
                st.pop();
                int n = num.top();
                num.pop();
                string combine = "";
                while(n--) combine = combine+temp;
                st.push(combine);
            }else{
                string temp = "";
                while(s[i]>='0' && s[i]<='9'){
                    temp = temp + s[i];
                    i++;
                }
                i--;
                num.push(stoi(temp));
            }
        }
        string res = "";
        while(!st.empty()){
            res = st.top()+res;
            st.pop();
        }
        return res;
    }
};









