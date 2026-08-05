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
    queue<TreeNode*>q;
    void s(TreeNode* root,vector<int>& a){
        if(root==NULL)return;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                if(i==n-1)a.push_back(t->val);
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>a;
        s(root,a);
        return a;
    }
};