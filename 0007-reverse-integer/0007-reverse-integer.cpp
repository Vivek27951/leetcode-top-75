class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x){
            if(res<INT_MIN/10 || INT_MAX/10<res)
                return 0;
            res = res*10;
            int t = x%10;
            if(res<INT_MIN+abs(t) || INT_MAX-abs(t)<res)
                return 0;
            res+=t;
            x = x/10;
        }
        return res;
    }
};


// 2147483647