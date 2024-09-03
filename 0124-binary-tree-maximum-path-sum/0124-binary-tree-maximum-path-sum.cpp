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
    
    int helper(TreeNode* root,int& ans){
        if(!root) return 0;
        int l = helper(root->left,ans);
        int r = helper(root->right,ans);
        ans = max(ans,l+r+root->val);
        return max(max(l+root->val,r+root->val),max(root->val,0));
    }
    
public:
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        int ans = INT_MIN;
        helper(root,ans);
        return ans;
    }
};