/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void levelSum(TreeNode* root,vector<int>& v,int lev){
        if(!root) return ;
        if(v.size()==lev)
            v.push_back(root->val);
        else
            v[lev]+=root->val;
        levelSum(root->left,v,lev+1);
        levelSum(root->right,v,lev+1);
    }
public:
    int maxLevelSum(TreeNode* root) {
        vector<int>v;
        levelSum(root,v,0);
        int res = 0;
        for(int i=1;i<v.size();i++){
            if(v[i]>v[res]) res = i;
        }
        return res+1;
    }
};