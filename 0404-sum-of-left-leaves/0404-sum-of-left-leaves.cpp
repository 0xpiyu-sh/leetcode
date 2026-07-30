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
    void s(TreeNode* root){
        if(root==NULL)return;
        if(root->left!=NULL){
            if(root->left->right==NULL && root->left->left==NULL){
                a+=root->left->val;
            }
            s(root->left);
        }
        if(root->right!=NULL){
            s(root->right);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        s(root);
        return a;
    }
};