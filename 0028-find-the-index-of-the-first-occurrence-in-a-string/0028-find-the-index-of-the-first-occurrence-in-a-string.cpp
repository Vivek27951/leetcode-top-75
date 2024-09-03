class Solution {
public:
    int strStr(string h, string n) {
        int a = h.size();
        int b = n.size();
        for(int i=0;i<=a-b;i++){
            if(h.substr(i,b)==n)return i;
        }
        return -1;
    }
};