//Given a binary tree, find the lowest common ancestor (LCA) of two given nodes P and Q in the tree.
public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

class Solution {
  
    /*1. We traverse in our tree using dfs.
      2. We return root if if find our p or q node.
      3. if we get only one root from our tree that means another node is child of that node and therefore that root is our ans.
      4. if we get two different root for P and Q from left and right of a root it means that our current node is LCA for them and we return current node.
    */

    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if(root ==p || root== q || root== null){
            return root;
        }
        TreeNode left =  lowestCommonAncestor(root.left,p,q);
        TreeNode right = lowestCommonAncestor(root.right,p,q);
        
        if(left != null && right != null){
            return root;
        }
        
        if(left == null){
            return right;
        }else{
            return left;
        }  
    }
}
