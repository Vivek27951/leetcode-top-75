class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int>mp;
        int start = 0;
        int end = 0;
        int max_len = 0;
        while(start<=end && end<n){
            if(mp[s[end]]==1){
                mp[s[start]]--;
                start++;
            }else{
                mp[s[end]]++;
                end++;
            }
            max_len = max(max_len,end-start);
        }
        return max_len;
    }
};