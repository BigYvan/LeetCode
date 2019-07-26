/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> tmp;
        helper(tmp, root);
        return tmp;
    }
    
    void helper(vector<int> &tmp, TreeNode* root){
        if(root != NULL){
            if(root->left != NULL)
                helper(tmp, root->left);
            tmp.push_back(root->val);
            if(root->right != NULL)
                helper(tmp, root->right);
        }
    }
};



//------------------------------------------------------


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> tmp;
        while(root != NULL || !tmp.empty()){
            while(root != NULL){
                tmp.push(root);
                root = root->left; 
            }
            root = tmp.top();
            result.push_back(root->val);
            tmp.pop();
            root = root->right;
        }

        return result;
    }
};