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
    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }

private:
    bool validate(TreeNode* node, TreeNode* low, TreeNode* high) {
        // An empty tree is a valid BST
        if (node == nullptr) return true;

        // Current node value must be strictly greater than low bound (if it exists)
        if (low != nullptr && node->val <= low->val) return false;
        
        // Current node value must be strictly less than high bound (if it exists)
        if (high != nullptr && node->val >= high->val) return false;

        // Left subtree values must be < node->val (update high bound)
        // Right subtree values must be > node->val (update low bound)
        return validate(node->left, low, node) && 
               validate(node->right, node, high);
    }
};