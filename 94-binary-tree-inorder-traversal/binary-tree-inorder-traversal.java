import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList<>();
        Stack<TreeNode> stack = new Stack<>();
        TreeNode curr = root;

        while (curr != null || !stack.isEmpty()) {
            // Reach the left most Node of the current Node
            while (curr != null) {
                stack.push(curr);
                curr = curr.left;
            }

            // Current must be null at this point
            curr = stack.pop();
            result.add(curr.val); // Add the node value

            // We have visited the node and its left subtree. Now, it's right subtree's turn
            curr = curr.right;
        }
        
        return result;
    }
}



