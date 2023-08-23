class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string res="";
        for(int i=0;i<n;i++){
            int j=i;
            while(j<n && s[j]!=' ')j++;
            if(j>i){
                if(res.size()==0) res = s.substr(i,j-i);
                else res = s.substr(i,j-i) + " "+res;
            }
            i=j;
        }
        return res;
    }
};