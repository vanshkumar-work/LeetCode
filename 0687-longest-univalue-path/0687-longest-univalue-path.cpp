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
    int height(TreeNode* root, int& ans){
        if (root==NULL) return 0 ;
        int l = height(root->left,ans) ;
        if(root->left==NULL || root->val != root->left->val){
          l = 0 ;
        }
        int r = height(root->right,ans) ;
        if(root->right==NULL || root->val != root->right->val){
            r = 0 ;
        }
        ans = max( ans, l+r) ;
        return 1+max(l,r);
    }
    int longestUnivaluePath(TreeNode* root) {
        int ans = 0; 
        height(root,ans);
        return ans ;

    }
};