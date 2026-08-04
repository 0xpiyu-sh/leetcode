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
    int b=1;
    void s(TreeNode* root,int a){
        if(root==NULL)return ;
        if(root->val!=a)b=0;;
        s(root->left,a);
        s(root->right,a);
    }
    bool isUnivalTree(TreeNode* root) {
        int a=root->val;
        s(root,a);
        return b;
    }
};