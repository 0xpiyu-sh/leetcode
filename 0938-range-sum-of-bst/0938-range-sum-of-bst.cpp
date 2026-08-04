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
    long long a=0;
    void s(TreeNode* root, int l, int h) {
        if(root==NULL)return;
        if(root->val>=l && root->val<=h)a+=root->val;
        s(root->left,l,h);
        s(root->right,l,h);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        s(root,low,high);
        return a;
    }
};