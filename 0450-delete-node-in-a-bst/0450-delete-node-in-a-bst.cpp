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
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        TreeNode* curr1 = root;
        TreeNode* prev1 = NULL;
        while(curr1){
            if(curr1->val==key) break;
            prev1 = curr1;
            if(curr1->val>key) curr1 = curr1->left;
            else curr1 = curr1->right;
        }
        if(curr1==NULL) return root;
        if(prev1==NULL && curr1->right==NULL)
            return curr1->left;
        if(prev1==NULL && curr1->right!=NULL){
            TreeNode* prev2 = curr1;
            TreeNode* curr2 = curr1->right;
            while(curr2->left){
                prev2 = curr2;
                curr2=curr2->left;
            }
            if(curr2->val>prev2->val){
                curr2->left = curr1->left;
                return curr2;
            } else{
                prev2->left = curr2->right;
                curr2->left = curr1->left;
                curr2->right = curr1->right;
                return curr2;
            }
        }
        if(prev1!=NULL && curr1->right==NULL){
            if(prev1->val>curr1->val)
                prev1->left = curr1->left;
            else
                prev1->right = curr1->left;
            return root;
        }
        TreeNode* curr2 = curr1->right;
        TreeNode* prev2 = curr1;
        while(curr2->left){
            prev2 = curr2;
            curr2 = curr2->left;
        }
        if(prev2->val>curr2->val)
            prev2->left = curr2->right;
        else
            prev2->right = curr2->right;
        curr2->left = curr1->left;
        curr2->right = curr1->right;
        if(prev1->val>curr1->val)
            prev1->left = curr2;
        else
            prev1->right = curr2;
        return root;
    }
};




















