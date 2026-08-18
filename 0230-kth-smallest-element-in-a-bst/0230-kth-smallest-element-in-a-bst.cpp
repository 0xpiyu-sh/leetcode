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
    void s(vector<int>& a,TreeNode* root){
        if(root==NULL)return;
        a.push_back(root->val);
        s(a,root->left);
        s(a,root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>a;
        s(a,root);
        sort(a.begin(),a.end());
        return a[k-1];
    }
};