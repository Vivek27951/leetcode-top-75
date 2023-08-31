class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int j = 0,i=0;
        for(i=0;i<n;i++){
            char ch = s[i];
            while(j<m && t[j]!=ch) j++;
            j++;
        }
        if(i==n && j<=m) return true;
        return false;
    }
};