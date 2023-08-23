class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels ({'a','e','i','o','u','A','E','I','O','U'});
        int l = s.size();
        int left = 0 , right = l-1;
        while(left<right){
            while(left<right && vowels.find(s[left])==vowels.end())
                left++;
            while(left<right && vowels.find(s[right])==vowels.end())
                right--;
            if(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};