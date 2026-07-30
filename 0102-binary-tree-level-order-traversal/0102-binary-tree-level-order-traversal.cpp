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
    queue<TreeNode*> q;
    void s(TreeNode* root,vector<vector<int>>& a){
        if(root==NULL)return;
        q.push(root);
        while(!q.empty()){
            vector<int>l;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                l.push_back(t->val);
                if(t->left!=NULL)q.push(t->left);
                if(t->right!=NULL)q.push(t->right);
            }
            a.push_back(l);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        s(root,a);
        return a;
    }
};