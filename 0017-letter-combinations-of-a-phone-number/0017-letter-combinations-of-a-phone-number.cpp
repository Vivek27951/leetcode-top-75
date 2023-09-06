class Solution {
    
    void helper(string digits,string curr,int i,vector<string>& ans,unordered_map<char,string>mp){
        if(i==digits.size()){
            ans.push_back(curr);
            return;
        }
        string temp = mp[digits[i]];
        for(char ch : temp){
            helper(digits,curr+string(1,ch),i+1,ans,mp);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0) return ans;
        
        unordered_map<char,string>mp;
        mp['2'] = "abc";mp['3'] = "def";
        mp['4'] = "ghi";mp['5'] = "jkl";
        mp['6'] = "mno";mp['7'] = "pqrs";
        mp['8'] = "tuv";mp['9'] = "wxyz";
        
        string curr = "";
        int i = 0;
        helper(digits,curr,i,ans,mp);
        return ans;
    }
};