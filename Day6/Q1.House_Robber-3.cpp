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
int find(TreeNode*&root,unordered_map<TreeNode*,int>&m){
    if(!root){
        return 0;
    }
    if(m.count(root)){
         return m[root];
    }
    int leftlmaxi = 0,leftrmaxi = 0,rightlmaxi = 0,rightrmaxi = 0;
    if(root->left){
        leftlmaxi = find(root->left->left,m);
        leftrmaxi = find(root->left->right,m);
    }
    if(root->right){
        rightlmaxi = find(root->right->left,m);
        rightrmaxi = find(root->right->right,m);
    }
    int include = root->val+leftlmaxi+leftrmaxi+rightlmaxi+rightrmaxi;

    int exclude = find(root->left,m)+find(root->right,m);
    return m[root] = max(include,exclude);
}
    int rob(TreeNode* root) {
        unordered_map<TreeNode*,int>m;
        return find(root,m);
    }
};
