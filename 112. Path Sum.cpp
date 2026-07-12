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
    bool target_found(TreeNode* root,int targetSum,int currsum){
        currsum += root->val;
        if (root->left == nullptr && root->right == nullptr) {
            return currsum == targetSum;
        }
        bool leftans = false;
        bool rightans = false;
        if(root->left != nullptr){
            leftans = target_found(root->left,targetSum,currsum);
        }
        if(root->right != nullptr){
            rightans = target_found(root->right,targetSum,currsum);
        }
        return leftans || rightans;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr){
            return false;
        }
        return target_found(root,targetSum,0);
    }
};