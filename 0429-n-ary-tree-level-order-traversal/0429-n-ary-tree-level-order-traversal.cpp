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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> a;

        if (root == NULL)
            return a;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            vector<int> b;

            for (int i = 0; i < n; i++) {
                Node* t = q.front();
                q.pop();

                b.push_back(t->val);

                for (Node* child : t->children) {
                    q.push(child);
                }
            }

            a.push_back(b);
        }

        return a;
    }
};