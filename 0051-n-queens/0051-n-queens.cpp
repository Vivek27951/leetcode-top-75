class Solution {
    bool valid(vector<string>& temp,int row,int col,int n){
        // check row
        for(int i=0;i<n;i++){
            if(temp[row][i]=='Q' && i!=col){
                return false;
            }
        }
        
        // check col
        for(int i=0;i<n;i++){
            if(temp[i][col]=='Q' && i!=row){
                return false;
            }
        }
        
        // check upper diag
        int i = row-1;
        int j = col+1;
        while(i>=0 && j<n){
            if(temp[i][j]=='Q') return false;
            i--;j++;
        }
        
        // check upper rev diag
        i = row-1;
        j = col-1;
        while(i>=0 && j>=0){
            if(temp[i][j]=='Q') return false;
            i--;j--;
        }
        
        //check lower daig
        i = row+1;
        j = col-1;
        while(i<n && j>=0){
            if(temp[i][j]=='Q') return false;
            i++;j--;
        }
        
        //check lower rev diag
        i = row+1;
        j = col+1;
        while(i<n && j<n){
            if(temp[i][j]=='Q') return false;
            i++;j++;
        }
        return true;
    }
    
    void helper(vector<vector<string>>& res,vector<string>& temp,int row,int n){
        if(row==n){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(valid(temp,row,i,n)){
                temp[row][i]='Q';
                helper(res,temp,row+1,n);
                temp[row][i]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        string def(n,'.');
        vector<string> temp(n,def);
        int row = 0;
        helper(res,temp,row,n);
        return res;
    }
};