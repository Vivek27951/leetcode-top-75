class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int rs = 0;
        int re = n-1;
        int cs = 0;
        int ce = m-1;
        char dir = 'r'; 
        vector<int>v;
        int count = 0;
        int total = n*m;
        while(total>count){
            if(dir=='r'){
                for(int i=cs;i<=ce;i++){
                    v.push_back(matrix[rs][i]);
                    count++;
                }
                rs++;
                dir='d';
            }else if(dir=='d'){
                for(int i=rs;i<=re;i++){
                    v.push_back(matrix[i][ce]);
                    count++;
                }
                ce--;
                dir='l';
            }else if(dir=='l'){
                for(int i=ce;i>=cs;i--){
                    v.push_back(matrix[re][i]);
                    count++;
                }
                re--;
                dir='u';
            }else{
                for(int i=re;i>=rs;i--){
                    v.push_back(matrix[i][cs]);
                    count++;
                }
                cs++;
                dir='r';
            }
        }
        return v;
    }
};