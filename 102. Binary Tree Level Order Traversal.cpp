/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };;;
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


class Solution {
public:
    void bfs(TreeNode* root,vector<vector<int>>& result){
        if(root == nullptr){
            return;
        }
        queue<TreeNode*> q;
        q.push(root);
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
            result.push_back(current);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        bfs(root,result);
        return result;
    }
};