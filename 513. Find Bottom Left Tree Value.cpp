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
    void bfs(TreeNode* root,int &num){
        if(root == nullptr){
           
            return ;
        }
        num = root->val;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int level = q.size();
            int count = 0;
            
            for(int i=0;i<level;i++){
                TreeNode* curr = q.front();
                q.pop();
                num = curr->val;
                 if(curr->right != nullptr){
                    q.push(curr->right);
                }
                if(curr->left != nullptr){
                    q.push(curr->left);
                }
               
            }
            
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        int num = -1;
        if(root->left == nullptr && root->right == nullptr){
            return root->val;
        }
        bfs(root,num);
        return num;
    }
};