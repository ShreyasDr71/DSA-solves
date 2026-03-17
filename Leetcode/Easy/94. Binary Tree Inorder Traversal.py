
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def func(root):
            if(root!=None):
                func(root.left)
                ans.append(root.val)
                func(root.right)
        ans=[]
        func(root)
        return ans
        
