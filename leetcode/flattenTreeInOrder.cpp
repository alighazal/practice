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
    
    void inorderTraversal (TreeNode* root, vector<int> &arr) {
        
        if (root == nullptr) return;
        
        inorderTraversal(root->left, arr);
        arr.push_back(root->val);
        inorderTraversal(root->right, arr);
        
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        
        vector<int> arr;
        
        inorderTraversal(root, arr);
        
        TreeNode* final_tree =  new TreeNode(arr[0]);
        TreeNode* temp_tree;
         
        temp_tree = final_tree;
        
        for (auto & n : arr) {
            
            temp_tree->right = new TreeNode(n) ;
            temp_tree = temp_tree->right;
                
        }
        
        return final_tree->right;
    }
};


/*
logic and intuition

    since we want to create a right skewed tree, where its stucture
    resemples the in-order traversal, we can indeed us the inorder logic :

        left
        root
        right
        
    so, we (i) basically solved this problem by creating an array (vector)
    where i pushed the children nodes in in-order fashion.

    then i create a new node and i kept insering the output of the array to create new nodes.
    and i used a temperary varialbe to keep track of the current node. 

    then i returned this first node.



*/