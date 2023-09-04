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
    
    void helper(TreeNode* root,vector<int>& v,int curr_dep,int& max_dep){
        if(!root) return ;
        if(curr_dep>max_dep){
            v.push_back(root->val);
            max_dep = curr_dep;
        }
        helper(root->right,v,curr_dep+1,max_dep);
        helper(root->left,v,curr_dep+1,max_dep);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        int curr_dep = 0;
        int max_dep = -1;
        helper(root,v,curr_dep,max_dep);
        return v;
    }
};