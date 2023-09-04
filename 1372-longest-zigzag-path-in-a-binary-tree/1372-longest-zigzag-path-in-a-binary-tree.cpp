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
    int pathLength = 0;
    void dfs(TreeNode* root,int flag,int step){
        if(!root) return ;
        pathLength = max(pathLength,step);
        if(flag){
            dfs(root->right,false,step+1);
            dfs(root->left,true,1);
        }else{
            dfs(root->left,true,step+1);
            dfs(root->right,false,1);
        }
    }
public:
    int longestZigZag(TreeNode* root) {
        dfs(root,true,0);
        dfs(root,false,0);
        return pathLength;
    }
};