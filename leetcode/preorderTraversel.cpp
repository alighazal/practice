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
    
    void traverse (Node* root, vector<int> &arr) {
        if (root == nullptr) return;
        
        arr.push_back(root->val);
        
        for (auto &i : root->children)
            traverse(i, arr);
       
        
        
    }
    
    
    vector<int> preorder(Node* root) {
        
        vector<int> answer;
        traverse(root, answer);
        
        return answer;
        
    }
};