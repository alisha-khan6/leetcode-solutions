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
int height(TreeNode* root){
    if(root == NULL)
        return 0 ;
    int sum = 0 ; 
    int l = height(root -> left) ;
    int h = height(root -> right) ;
    return 1 + max(l , h) ;
}

int maxdia = 0 ;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0 ;
        int a = height(root -> left) ;
        int b = height(root -> right) ;
        int sum = a + b ;
        maxdia = max(maxdia , sum) ;
        diameterOfBinaryTree(root -> left) ;
        diameterOfBinaryTree(root -> right) ;
        return maxdia ;
    }
};
