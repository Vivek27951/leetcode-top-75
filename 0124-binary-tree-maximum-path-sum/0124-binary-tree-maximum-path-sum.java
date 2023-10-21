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
    private int helper(TreeNode root,int[] sum){
        if(root==null) return 0;
        int l = helper(root.left,sum);
        int r = helper(root.right,sum);
        if(l+r+root.val>sum[0]) sum[0] = l+r+root.val;
        return Math.max(Math.max(root.val,0),Math.max(l+root.val,r+root.val));
    }
        
        
    public int maxPathSum(TreeNode root) {
        if(root==null) return 0;
        int[] sum = {Integer.MIN_VALUE};
        helper(root,sum);
        return sum[0];
        
    }
}