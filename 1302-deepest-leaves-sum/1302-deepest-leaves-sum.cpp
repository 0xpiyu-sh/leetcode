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
    void s(vector<vector<int>>& a,TreeNode* root ){
        if(root==NULL)return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>b;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                b.push_back(t->val);
                if(t->left!=NULL)q.push(t->left);
                if(t->right!=NULL)q.push(t->right);
            }
            a.push_back(b);
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>> a;
        s(a,root);
        int b=0;
        for(int i:a[a.size()-1]){
            b+=i;
        }
        return b;
    }
};