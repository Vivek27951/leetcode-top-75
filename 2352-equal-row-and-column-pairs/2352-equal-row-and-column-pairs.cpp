class Solution {
    
    struct VectorHash {
        size_t operator()(const vector<int>& v) const {
            hash<int> hasher;
            size_t seed = 0;
            for (int i : v) {
                seed ^= hasher(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
            }
            return seed;
        }
    };
    
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<vector<int>,int,VectorHash>mp1;
        for(auto v : grid)
            mp1[v]++;
        int res = 0;
        for(int i=0;i<n;i++){
            vector<int> temp ;
            for(int j=0;j<n;j++){
                temp.push_back(grid[j][i]);
            }
            if(mp1.find(temp)!=mp1.end())
                res += mp1[temp];
        }
        return res;
    }
};