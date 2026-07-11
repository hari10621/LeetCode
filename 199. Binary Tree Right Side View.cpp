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

    void bfs(TreeNode* root,vector<int>&result){
        if(root == nullptr){
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            
            int level = q.size();
           
            vector<int> trav;
            for(int i=0;i<level;i++){
                TreeNode* curr = q.front();
                q.pop();              
                trav.push_back(curr->val);
                if(curr->left != nullptr){
                    q.push(curr->left);
                    
                }
                if(curr->right != nullptr){
                    q.push(curr->right);
                   
                }
            }
            result.push_back(trav[trav.size()-1]);
            
        }
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        bfs(root,result);
        return result;
    }
};