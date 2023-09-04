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
    
    int helper(TreeNode* root,int max){
        if(!root) return 0;
        if(root->val>=max) 
            return 1+ helper(root->left,root->val) + helper(root->right,root->val);
        return helper(root->left,max) + helper(root->right,max);
        
    }
    
public:
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        return helper(root,INT_MIN);
        
    }
};