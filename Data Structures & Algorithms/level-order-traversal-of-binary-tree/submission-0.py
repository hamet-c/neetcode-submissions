# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: TreeNode | None) -> list[list[int]]:
        if not root:
            return []
        res = []
        queue = deque()
        queue.append(root)
        while queue:
            curr = []
            for x in range(len(queue)):
                val = queue.popleft()
                if val:
                    curr.append(val.val)
                    queue.append(val.left)
                    queue.append(val.right)
            if curr:
                res.append(curr)

        return res
