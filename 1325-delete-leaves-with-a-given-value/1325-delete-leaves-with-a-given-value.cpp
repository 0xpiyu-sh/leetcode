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
    TreeNode* p(TreeNode* root, int t) {
        if(root == NULL)
            return NULL;

        root->left = p(root->left, t);
        root->right = p(root->right, t);

        if(root->val == t && root->left == NULL && root->right == NULL)
            return NULL;

        return root;
    }

    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return p(root, target);
    }
};