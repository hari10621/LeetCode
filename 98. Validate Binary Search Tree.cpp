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

    void inorder(TreeNode* root,vector<int>&result){
        if(root == nullptr){
            return;
        }
        inorder(root->left,result);
        result.push_back(root->val);
        inorder(root->right,result);

    }
    
    bool isValidBST(TreeNode* root) {
        vector<int> tree;
        inorder(root,tree);
        for(int i=1;i<tree.size();i++){
            if(tree[i] <= tree[i-1]){
                return false;
            }
        }
        return true;
    }
};