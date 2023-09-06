class Solution {
    void helper(vector<vector<int>>& ans,vector<int>& temp,int curr,int index,int k,int n){
        if(temp.size()==k && curr==n){
            ans.push_back(temp);
            return;
        }
        
        if(index>9 || curr>n || temp.size()>k)
            return;
        
        for(int i=index;i<=9;i++){
            temp.push_back(i);
            helper(ans,temp,curr+i,i+1,k,n);
            temp.pop_back();
        }    
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        int curr = 0;
        int index = 1;
        helper(ans,temp,curr,index,k,n);
        return ans;
    }
};