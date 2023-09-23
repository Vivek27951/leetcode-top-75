class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.size();
        int f = 0;
        while(f<l){
            if(!(isalpha(s[f]) || isdigit(s[f]))){
                f++; continue;
            }
            if(!(isalpha(s[l]) || isdigit(s[l]))){
                l--; continue;
            }
            if(tolower(s[f])!=tolower(s[l]))
                    return false;
             f++;l--;
        }
        return true;
    }
};