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
    bool is( TreeNode* l, TreeNode* r){
        if(l==NULL && r==NULL) return true ;
        if ( l==NULL || r==NULL) return false ;
        return (l->val==r->val) && is(l->left , r->right) && is(l->right , r->left) ;
    }
    bool isSymmetric(TreeNode* root) {
        if (root==NULL) return true ;
        return is(root->left , root->right) ; 
        
        
        
    }
};