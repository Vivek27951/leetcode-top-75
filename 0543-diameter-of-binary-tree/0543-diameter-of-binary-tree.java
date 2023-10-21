/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    int helper(TreeNode root,int[] dia){
        if(root==null) return 0;
        int l = helper(root.left,dia);
        int r = helper(root.right,dia);
        if(l+r>dia[0]) dia[0] = l+r;
        return Math.max(l,r)+1;
    }

    public int diameterOfBinaryTree(TreeNode root) {
        if(root==null) return 0;
        // int dia = 0;
        int[] dia = new int[1];
        helper(root,dia);
        return dia[0];
    }
}