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
    vector<TreeNode*> generateTrees(int n) {
        if(n == 0){
            vector<TreeNode*> tmp;
            return tmp;
        }else{
            return gen(1, n);
        }
    }
    
    vector<TreeNode*> gen(int start, int end){
        vector<TreeNode*> result;
        if(start > end){
            result.push_back(NULL);
            return result;
        }
        if(start == end){
            TreeNode* tmp = new TreeNode(start);
            result.push_back(tmp);
            return result;
        }
        for(int i = start; i <= end; i++){
            vector<TreeNode*> leftTree;
            vector<TreeNode*> rightTree;
            leftTree = gen(start, i - 1);
            rightTree = gen(i + 1, end);
            for(auto iter = leftTree.cbegin(); iter != leftTree.cend(); iter++){
                for(auto iter_2 = rightTree.cbegin(); iter_2 != rightTree.cend(); iter_2++){
                    TreeNode* tmp = new TreeNode(i);
                    tmp->left = *iter;
                    tmp->right = *iter_2;
                    result.push_back(tmp);
                }
            }
        }
        return result;
    }
};