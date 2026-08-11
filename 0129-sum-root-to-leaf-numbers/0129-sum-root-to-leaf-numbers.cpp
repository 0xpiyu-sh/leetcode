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
    void s(vector<int>& a, TreeNode* root, int n) {
        if (root == NULL)
            return;

        n = n * 10 + root->val;

        if (root->left == NULL && root->right == NULL) {
            a.push_back(n);
            return;
        }

        s(a, root->left, n);
        s(a, root->right, n);
    }

    int sumNumbers(TreeNode* root) {
        vector<int> a;

        s(a, root, 0);

        int b = 0;

        for (int i : a)
            b += i;

        return b;
    }
};