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
TreeNode* insert(vector<int> nums , int s , int h){
    if(s > h)
        return NULL ;
    int n = nums.size() ;
    int mid = s + (h - s) / 2 ;
    TreeNode* root = new TreeNode(nums[mid]) ;
    root -> left = insert(nums , s , mid - 1) ;
    root -> right = insert(nums , mid + 1 , h) ;
    return root ; 
}
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size() ;
        int s = 0 ;
        int h = n - 1 ;
        return insert(nums , s , h) ;
    }
};
