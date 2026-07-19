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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans ;
        queue<TreeNode*> q ;
        if(root==NULL) return ans ;
        q.push(root) ;
        int p = 0; 
        while(!q.empty()){
            int n = q.size() ;
            vector <int>  l ;
            for(int i = 0  ; i<n ; i++){
                TreeNode* node = q.front() ;
                q.pop() ;
                l.push_back(node->val) ;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
            p++ ;
            if(p%2==0) reverse(l.begin(),l.end());
            ans.push_back(l);
        }
        return ans ;
    }
};