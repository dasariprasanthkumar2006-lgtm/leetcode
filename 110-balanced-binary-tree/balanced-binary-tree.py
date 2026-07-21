# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def height(self,root):
        if root is None:
            return 0
        return max(self.height(root.left),self.height(root.right))+1
    def isBalanced(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: bool
        """

        if root is None:
            return True 

        l=self.height(root.left)
        r=self.height(root.right)

        if abs(l-r) >1:
            return False

        return (self.isBalanced(root.left) and self.isBalanced(root.right))
        