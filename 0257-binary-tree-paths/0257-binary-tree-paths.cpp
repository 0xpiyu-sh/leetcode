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
    vector<string>a;
    void s(TreeNode* root,string b){
        if(root==NULL)return;
        b+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            a.push_back(b);
            return;
        }
        b+="->";
        s(root->left,b);
        s(root->right,b);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string b="";
        s(root,b);
        return a;
    }
};