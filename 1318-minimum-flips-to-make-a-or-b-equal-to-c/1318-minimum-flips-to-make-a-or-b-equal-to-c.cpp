class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0;
        while(a || b || c){
            bool x = a&1;
            bool y = b&1;
            bool z = c&1;
            if(z && (!x && !y))
                count++;
            if(!z){
                if(x) count++;
                if(y) count++;
            }
            a=a>>1;
            b=b>>1;
            c=c>>1;
        }
        return count;
    }
};