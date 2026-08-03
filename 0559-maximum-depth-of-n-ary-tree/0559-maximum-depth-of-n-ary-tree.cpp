/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/


class Solution {
public:
    int x=INT_MIN;
    void s(int a,Node* root){
        if(root==NULL)return;
        a++;
        if(empty(root->children)){
            x=max(x,a);
        }
        for(int i=0;i<root->children.size();i++){
            s(a,root->children[i]);
        }
        return;
    }
    int maxDepth(Node* root) {
        if(root==NULL)return 0;
        s(0,root);
        return x;
    }
};