/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* a=NULL;
    void s(TreeNode* o,TreeNode* root,TreeNode* target){
        if(root==NULL)return ;
        if(target==o)a=root;
        s(o->left,root->left,target);
        s(o->right,root->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        s(original,cloned,target);
        return a;
    }
};