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
    vector<double> a;
    queue<TreeNode*> q;

    void s(TreeNode* root){
        if(root==NULL) return;

        q.push(root);

        while(!q.empty()){
            int n = q.size();
            double b = 0;

            for(int i = 0; i < n; i++){
                TreeNode* t = q.front();
                q.pop();

                b += t->val;

                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }

            a.push_back(b / n);
        }
    }

    vector<double> averageOfLevels(TreeNode* root) {
        s(root);
        return a;
    }
};