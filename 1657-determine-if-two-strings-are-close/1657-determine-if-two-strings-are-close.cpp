class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto ch : word1)
            mp1[ch]++;
        for(auto ch : word2)
            mp2[ch]++;
        set<char>char1;
        vector<int>feq1;
        for(auto entry : mp1){
            char1.insert(entry.first);
            feq1.push_back(entry.second);
        }
        set<char>char2;
        vector<int>feq2;
        for(auto entry : mp2){
            char2.insert(entry.first);
            feq2.push_back(entry.second);
        }
        
        if(char1.size()!=char2.size())return false;
        for(auto ch : char1){
            if(char2.find(ch)==char2.end()) return false;
        }
        
        
         if(feq1.size()!=feq2.size())return false;
        sort(feq1.begin(),feq1.end());
        sort(feq2.begin(),feq2.end());
        for(int i=0;i<feq1.size();i++){
            if(feq1[i]!=feq2[i]) return false;
        }
        return true;
    }
};