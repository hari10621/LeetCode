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
    TreeNode* find_min(TreeNode* root){
        if(root == nullptr){
            return root;
        }
        while(root->left != nullptr){
            root = root->left;
        }
        return root;
    }
    TreeNode* del_node(TreeNode* root,int key){
        if(root == nullptr){
            return nullptr;
        }
        if(root->val > key){
            root->left=del_node(root->left,key);
        }
        else if(root->val < key){
            root->right=del_node(root->right,key);
        }
        else{
            if(root->left == nullptr){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right == nullptr){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            else{
                TreeNode* temp = find_min(root->right);
                root->val = temp->val;
                root->right = del_node(root->right,temp->val);
            }
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        return del_node(root,key);
    }
};