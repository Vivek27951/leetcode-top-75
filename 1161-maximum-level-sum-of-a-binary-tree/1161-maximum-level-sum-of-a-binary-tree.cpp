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
    
    int height(TreeNode* root){
        if(!root) return 0;
        return max(height(root->left),height(root->right))+1;
    }
    void levelSum(TreeNode* root,vector<int>& v,int lev){
        if(!root) return ;
        v[lev]+=root->val;
        levelSum(root->left,v,lev+1);
        levelSum(root->right,v,lev+1);
    }
public:
    int maxLevelSum(TreeNode* root) {
        int h = height(root);
        vector<int>v(h,0);
        levelSum(root,v,0);
        int res = 0;
        for(int i=1;i<v.size();i++){
            if(v[i]>v[res]) res = i;
        }
        return res+1;
    }
};