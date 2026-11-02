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
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
    
    // If it's a leaf node
    if (root->left == NULL && root->right == NULL) return 1;
    
    // If the left child is missing, look only in the right subtree
    if (root->left == NULL) return 1 + minDepth(root->right);
    
    // If the right child is missing, look only in the left subtree
    if (root->right == NULL) return 1 + minDepth(root->left);
    
    // If both children exist, take the minimum of both paths
    return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
