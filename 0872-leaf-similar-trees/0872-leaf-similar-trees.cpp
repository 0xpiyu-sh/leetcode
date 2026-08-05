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
    void s(TreeNode* root,vector<int>& a){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL)a.push_back(root->val);
        s(root->left,a);
        s(root->right,a);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a;
        vector<int>b;
        s(root1,a);
        s(root2,b);
        return a==b;
    }
};