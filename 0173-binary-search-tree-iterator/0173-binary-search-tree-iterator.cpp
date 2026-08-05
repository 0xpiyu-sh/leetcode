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
class BSTIterator {
public:
    vector<int>a;
    int i;
    void s(TreeNode* root){
        if(root==NULL)return;
        s(root->left);
        a.push_back(root->val);
        s(root->right);
    }
    BSTIterator(TreeNode* root) {
        i=0;
        s(root);
    }
    
    int next() {
        return a[i++];
    }
    
    bool hasNext() {
        return i<a.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */