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
    int a=0;
    int s(TreeNode* root){
        if(root==NULL)return 0;
        int l=s(root->left);
        int r=s(root->right);
        a=max(a,l+r);
        return 1+max(l,r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        s(root);
        return a;
    }
};