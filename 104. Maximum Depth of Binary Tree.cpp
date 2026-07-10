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
    int find_depth(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int left = find_depth(root->left);
        int right = find_depth(root->right);
        return max(left,right)+1;
    }
    int maxDepth(TreeNode* root) {
        return find_depth(root);
    }
};