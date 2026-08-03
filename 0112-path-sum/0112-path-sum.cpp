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
    void s(TreeNode* root,int b,int c){
        if(root==NULL)return;
        b+=root->val;
        if(root->right==NULL && root->left==NULL){
            if(b==c)a=1;
            return;
        }
        s(root->left,b,c);
        s(root->right,b,c);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        s(root,0,targetSum);
        return a;
    }
};