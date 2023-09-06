class Solution {

    void dfs(int node,vector<vector<int>>& isConnected, vector<bool>& isVist){
        isVist[node] = true;
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[node][i] && !isVist[i]){
                dfs(i,isConnected,isVist);
            }
        }
    }
    
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int res = 0;
        int n = isConnected.size();
        vector<bool>isVist(n,false);
        for(int i=0;i<n;i++){
            if(!isVist[i]){
                res++;
                dfs(i,isConnected,isVist);
            }
        }
        return res;
    }
};
