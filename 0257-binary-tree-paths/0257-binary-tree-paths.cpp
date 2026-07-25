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
    void p(TreeNode* root , string path , vector<string>&ans){
        path += to_string(root->val) ;
        if(root->left) p(root->left , path+"->" , ans) ;
        if(root-> right) p(root->right ,path+"->" ,ans);
         if(root->left==NULL && root->right==NULL){
            ans.push_back(path);
            }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans ;
        string path ;
        p(root , path ,ans);
        return ans ;
        
    }
};