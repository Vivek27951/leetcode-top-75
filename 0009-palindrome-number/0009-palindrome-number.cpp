class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int res = 0;
        int t = x;
        while(x){
            if(res>INT_MAX/10 || (res==INT_MAX/10 && x%10>7))
                return false;
            res = res*10 + x%10;
            x=x/10;
        }
        return res==t;
    }
};

// 2147483647
// 1000000001