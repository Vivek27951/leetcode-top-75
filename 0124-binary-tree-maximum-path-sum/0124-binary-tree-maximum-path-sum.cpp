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
private:
    int helper(TreeNode* root,int& maxSum){
        if(root==NULL) return 0;
        int l = helper(root->left,maxSum);
        int r = helper(root->right,maxSum);
        if(l+r+root->val>maxSum) maxSum = l+r+root->val;
        return max(max(root->val,0),max(l+root->val,r+root->val));
    }
public:
    int maxPathSum(TreeNode* root) {
        if(root==NULL) return 0;
        int maxSum = INT_MIN;
        helper(root,maxSum);
        return maxSum;
    }
};