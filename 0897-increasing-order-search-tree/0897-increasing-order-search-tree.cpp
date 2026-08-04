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
    vector<int>a;
    TreeNode* b=NULL;
    void s(TreeNode* root){
        if(root==NULL)return;
        a.push_back(root->val);
        s(root->left);
        s(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        s(root);
        sort(a.begin(),a.end());
        TreeNode* t=new TreeNode(a[0]);
        TreeNode* temp=t;
        for(int i=1;i<a.size();i++){
            TreeNode* v=new TreeNode(a[i]);
            temp->right=v;
            temp=temp->right;
        }
        return t;
    }
};