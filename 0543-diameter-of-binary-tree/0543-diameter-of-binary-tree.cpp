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
    int height( TreeNode* root , int& diameter){
        if(root==NULL) return 0 ;
        int h = height(root->left , diameter);
        int r = height(root-> right , diameter);
        diameter = max( diameter,h+r);
        return 1+max(h,r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0 ;
        height(root,diameter) ;
        return diameter ;
        
        
    }
    
};