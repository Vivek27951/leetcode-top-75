class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int j = 0,i=0;
        while(i<n && j<m){
            if(s[i]==t[j]) i++;
            j++;
        }
        return i==n;
    }
};