class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels ({'a','e','i','o','u','A','E','I','O','U'});
        int n = s.size();
        int bi = n-1;
        for(int i=0;i<n;i++){
            if(i<bi && vowels.find(s[i])!=vowels.end()){
                for(int j=bi;j>=0;j--){
                    if(vowels.find(s[j])!=vowels.end()){
                        swap(s[i],s[j]);
                        bi=j-1;
                        break;
                    }
                }
            }
        }
        return s;
    }
};