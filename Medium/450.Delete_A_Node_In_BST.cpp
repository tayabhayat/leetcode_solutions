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
    TreeNode* deleteNode(TreeNode* root, int key) {
    TreeNode* curr = root;
    TreeNode *prnt = nullptr;
    while(curr != nullptr && curr->val != key){
    prnt = curr;
    if(key < curr->val){
        curr = curr->left;
    }
    else{
        curr = curr->right;
        }
    }
    if(curr == nullptr)
     return root;
    if(curr->left != nullptr && curr->right != nullptr){
        TreeNode* pred = curr->left;
        TreeNode* ppred = curr;
        while(pred->right != nullptr){
            ppred = pred;
            pred = pred->right; 
        }
        curr->val = pred->val;
        curr = pred;
        prnt = ppred;
    }
    // Degree 0 1
    TreeNode * ch;
    if(curr->left != nullptr){
        ch = curr->left;
    }
    else{
        ch = curr->right;
    }
    if(curr == root){
        root = ch;
    }
    else{
        if(curr == prnt->right){
            prnt->right = ch;
        }
        else{
            prnt->left = ch;
        }
    }
    delete curr;
    curr = nullptr;
    return root;
}
};