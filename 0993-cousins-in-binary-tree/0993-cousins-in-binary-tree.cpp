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
    int a=0;
    int b=0;
    int c=0;
    queue<TreeNode*>q;
    void s(TreeNode* root, int x, int y){
        q.push(root);
        int i=1;
        while(!q.empty()){
            int n=q.size(); 
            for(int j=0;j<n;j++){
                TreeNode* r=q.front();
                q.pop();
                if(r->val==x)a=i;
                if(r->val==y)b=i;
                if((r->right!=NULL)&&(r->left!=NULL)){
                if((r->right->val==x)&&(r->left->val==y))c++;
                if((r->right->val==y)&&(r->left->val==x))c++;
                }
                if(r->left!=NULL)q.push(r->left);
                if(r->right!=NULL)q.push(r->right);
            }
            i++;
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        s(root,x,y);
        if(c==1)return false;
        return a==b;
    }
};