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
    void s(vector<string>&a,TreeNode*root,string b){
        if(root==NULL)return;
        b+='a'+root->val;
        if(root->left==NULL && root->right==NULL){
            reverse(b.begin(), b.end());
            a.push_back(b);
            return;
        }
        s(a,root->left,b);
        s(a,root->right,b);
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string>a;
        string b="";
        s(a,root,b);
        sort(a.begin(),a.end());
        return a[0];
    }
};