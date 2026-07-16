from collections import deque

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def levelOrder(self, root):
        if not root:
            return []
        
        result = []
        q = deque([root])
        
        while q:
            level_size = len(q)      # Number of elements at the current level
            current_level = []       # List to store values of the current level
            
            for _ in range(level_size):
                node = q.popleft()
                current_level.append(node.val)
                
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
                    
            result.append(current_level) # Add the current level to the final result
            
        return result

        