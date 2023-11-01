class Solution {
    bool check(vector<vector<int>>& vis,vector<vector<int>>& grid,int nr,int nc,int n,int m){
        return nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]==0 && grid[nr][nc]==1;
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        int count = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) count++;
                else if(grid[i][j]==2){
                    q.push(make_pair(i,j));
                }
            }
        }
        int time = 0;
        int dr[] = {0,0,1,-1};
        int dc[] = {1,-1,0,0};
        while(!q.empty()){
            int size = q.size();
            bool flag = false;
            for(int k=0;k<size;k++){
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int nr = r+dr[i];
                    int nc = c+dc[i];
                    if(check(vis,grid,nr,nc,n,m)){
                        vis[nr][nc] = 1;
                        q.push(make_pair(nr,nc));
                        flag = true;
                        count--;
                    }
                }
            }
            if(flag) time++;
        }
        return count==0 ? time : -1;
    }
};