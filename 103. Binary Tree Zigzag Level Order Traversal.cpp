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

    void bfszigzag(TreeNode* root,vector<vector<int>>& result){
        if(root == nullptr){
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
        int count = 2;
        while(!q.empty()){
            int level = q.size();
             vector<int> current;
            for(int i=0;i<level;i++){
               
                TreeNode* curr = q.front();
                q.pop();
                current.push_back(curr->val);
                if(curr->left != nullptr){
                    q.push(curr->left);
                }
                if(curr->right != nullptr){
                    q.push(curr->right);
                }
            }
            if(count % 2  == 1){
                reverse(current.begin(),current.end());
            }
            result.push_back(current);
            count++;
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        bfszigzag(root,result);
        return result;
    }
};