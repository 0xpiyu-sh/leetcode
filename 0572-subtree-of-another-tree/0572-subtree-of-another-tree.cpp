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
    bool same(TreeNode* r,TreeNode* s){
        if(r==NULL || s==NULL){
            return r==s;
        } 
        if(r->val!=s->val)return false;
        return same(r->left,s->left)&&same(r->right,s->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL || subRoot==NULL){
            return root==subRoot;
        } 
        if(root->val==subRoot->val&&same(root,subRoot))return true;
        return isSubtree(root->right,subRoot)||isSubtree(root->left,subRoot);
    }
};