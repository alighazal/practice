/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(inst x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        
        
        TreeNode* tm = new TreeNode;

        if (t1 != nullptr && t2 != nullptr){ 
            
            tm->val = t1->val + t2->val; 

            tm->left = mergeTrees(t1->left,  t2->left);
            tm->right = mergeTrees(t1->right,  t2->right);

            return tm;
              
        } 
        else if (t1 == nullptr) 
            return t2;

        else if (t2 == nullptr)
            return t1;
            
        else   
            return nullptr;

    }
};