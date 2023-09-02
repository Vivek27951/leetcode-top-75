class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n = arr.size();
        for(auto num : arr){
            mp[num]++;
        }
        unordered_set<int>s;
        for(auto& num : mp){
            if(s.find(num.second)!=s.end()) return false;
            s.insert(num.second);
        }
        return true;
    }
};