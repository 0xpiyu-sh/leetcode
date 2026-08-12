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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {

        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }

        if (root == NULL)
            return root;

        queue<TreeNode*> q;
        q.push(root);

        int a = 1;

        while (!q.empty()) {

            int n = q.size();

            if (a == depth - 1) {

                for (int i = 0; i < n; i++) {

                    TreeNode* t = q.front();
                    q.pop();

                    TreeNode* left = new TreeNode(val);
                    TreeNode* right = new TreeNode(val);

                    left->left = t->left;
                    right->right = t->right;

                    t->left = left;
                    t->right = right;
                }

                break;
            }

            for (int i = 0; i < n; i++) {

                TreeNode* t = q.front();
                q.pop();

                if (t->left != NULL)
                    q.push(t->left);

                if (t->right != NULL)
                    q.push(t->right);
            }

            a++;
        }

        return root;
    }
};