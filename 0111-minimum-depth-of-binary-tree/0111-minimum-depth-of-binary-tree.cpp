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
    int a=INT_MAX;
    void s(TreeNode* root,int b){
        if(root==NULL)return;
        b++;
        if(root->right==NULL && root->left==NULL){
            a=min(a,b);
            return;
        }
        s(root->left,b);
        s(root->right,b);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0 ;
        s(root,0);
        return a;
    }
};