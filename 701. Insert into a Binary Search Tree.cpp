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
    void insert(TreeNode* root,int val){
        if(root == nullptr){
            return;
        }
        if(root->val > val && root->left == nullptr){
            TreeNode* newnode = new TreeNode(val);
            root->left =  newnode;
            return;
        }
        else if(root->val < val && root->right == nullptr){
            TreeNode* newnode = new TreeNode(val);
            root->right =  newnode;
            return;
        }
        if(root->val > val){
            insert(root->left,val);
        }
        else{
            insert(root->right,val);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr){
            TreeNode* newnode = new TreeNode(val);
            return newnode;
        }
        insert(root,val);
        return root;
    }
};