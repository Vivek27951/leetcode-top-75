class Solution {
    
    void DFS(vector<vector<int>> &adj,vector<bool> &vis,int s,unordered_set<int> &teams){
        vis[s]=true;
        
        for(auto x : adj[s]){
            if(teams.find(x)!=teams.end())
                teams.erase(x);
            if(!vis[x]) DFS(adj,vis,x,teams);
        }
    }
    
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto edge : edges){
            adj[edge[0]].push_back(edge[1]);
        }
        unordered_set<int>teams;
        vector<bool> vis(n,false);
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                DFS(adj,vis,i,teams);
                teams.insert(i);
            }
        }
        
        if(teams.size()==1) return *teams.begin();
        return -1;
    }
};