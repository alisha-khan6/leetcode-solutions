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
TreeNode* getsuccessor(TreeNode* root){
    while(root != NULL && root -> left != NULL){
        root = root -> left ;
    }
    return root ;
}
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return NULL ;
        if(key < root -> val)
            root -> left = deleteNode(root -> left , key) ;
        else if(key > root -> val)
            root -> right = deleteNode(root -> right , key) ;

        else{

            if(root -> left == NULL && root -> right == NULL){
                    delete root ;
                    return NULL ;
            }

            else if(root -> left == NULL || root -> right == NULL){
                    TreeNode* temp ;
                        if(root -> left != NULL)
                            temp = root -> left ;
                        else
                            temp = root -> right ;
                    delete root ;
                    return temp ;
            }

            else{
                TreeNode* i_s = getsuccessor(root -> right) ;
                root -> val = i_s -> val ;
                root -> right = deleteNode(root -> right , i_s -> val) ;
            }

        }

        return root ;

    }
};
























