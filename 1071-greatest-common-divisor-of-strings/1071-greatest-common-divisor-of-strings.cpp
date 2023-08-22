class Solution {
    private:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
public:
    string gcdOfStrings(string s1, string s2) {
        if(s1+s2!=s2+s1)
            return "";
        int l = gcd(s1.size(),s2.size());
        return s1.substr(0,l);
    }
};
