class Solution {
public:
    bool isSubsequence(string s, string t) {
        // int n = s.size();
        // int m = t.size();
        // int j = 0,i=0;
        // while(i<n && j<m){
        //     if(s[i]==t[j]) i++;
        //     j++;
        // }
        // return i==n;
        if(s.size()==0) return true;
        if(t.size()==0) return false;
        if(s[0]==t[0]) return isSubsequence(s.substr(1),t.substr(1));
        return isSubsequence(s,t.substr(1));
    }
};