class Solution {
    
public:
    string reverseWords(string s) {
        string res = "";
        bool flag = true;
        for(int i=0;i<s.size();i++){
            int j = i;
            while(j<s.size() && s[j]!=' ')j++;
            if(i!=j){
                if(flag) res = s.substr(i,j-i);
                else res= s.substr(i,j-i)+" "+res;
                flag = false;
            } 
            i=j;
        }
        return res;
    }
};