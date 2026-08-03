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
    void s(TreeNode* root){
        if(root==NULL)return;
        a.push_back(root->val);
        s(root->left);
        s(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        s(root);
        sort(a.begin(),a.end());
        int b=a[0];
        for(int i:a){
            if(i!=a[0]){
                return i;
            }
        }
        return -1;
    }
};