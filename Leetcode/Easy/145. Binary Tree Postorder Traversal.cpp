
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> res;
        if(!root){
            return res;
        }

        stack<TreeNode*> stack;
        stack.push(root);


        while(!stack.empty()){
            TreeNode* node = stack.top();
            stack.pop();
            res.push_back(node -> val);

            if(node -> left){
                stack.push(node -> left);
            }
             if(node -> right){
                stack.push(node -> right);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
