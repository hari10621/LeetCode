/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void level_order(vector<vector<int>> &result,int level,TreeNode* root){
        if(root == nullptr){
            return;
        }
        if(result.size() <= level){
            result.push_back({});
        }
        result[level].push_back(root->val);
        level_order(result,level+1,root->left);
        level_order(result,level+1,root->right);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        level_order(result,0,root);
        return result;
    }
};