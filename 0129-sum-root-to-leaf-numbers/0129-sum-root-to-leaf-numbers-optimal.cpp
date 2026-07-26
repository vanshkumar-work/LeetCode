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
    void p(TreeNode* root , int curr ,int& ans){
        if(root==NULL) return ;
        curr = root->val + curr*10 ;
        if(root->left==NULL && root->right == NULL){
             ans+=curr;
             curr = 0;
        }
        p(root->left , curr , ans) ;
        p(root->right , curr , ans) ;
        
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0 ;
        int curr = 0 ;
        p(root , curr , ans);
        return ans ;
    }
};
