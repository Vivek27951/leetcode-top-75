class Solution {
    void helper(vector<vector<int>>& rooms,queue<int>& q,int k){
        for(int i=0;i<rooms[k].size();i++)
            q.push(rooms[k][i]);
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_map<int,int>mp;
        queue<int>q;
        int n = rooms.size();
        helper(rooms,q,0);
        mp[0]=1;
        while(!q.empty()){
            int c = q.front();
            q.pop();
            if(mp.find(c)==mp.end()){
                mp[c]=1;
                helper(rooms,q,c);
            }
        }
        return mp.size()==n;
    }
};