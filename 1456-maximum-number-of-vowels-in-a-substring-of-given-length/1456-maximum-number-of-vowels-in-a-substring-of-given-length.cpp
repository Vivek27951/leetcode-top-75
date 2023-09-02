class Solution {
private:
    bool helper(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int res = 0;
        for(int i=0;i<k;i++){
            if(helper(s[i])) res++;
        }
        int temp = res;
        for(int i=k;i<n;i++){
            if(helper(s[i-k])) temp--;
            if(helper(s[i])) temp++;
            res = max(res,temp);
        }
        return res;
    }
};