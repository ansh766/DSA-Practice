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
void check(TreeNode*root,int&maxivalue,unordered_map<int,int>&m){
     if(!root){
         return;
     }
     m[root->val]++;
     maxivalue = max(maxivalue,m[root->val]);

     check(root->left,maxivalue,m);
     check(root->right,maxivalue,m);
}
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>m;
        int maxivalue = 0;
        check(root,maxivalue,m);
  vector<int>ans;
        for(auto p: m){
             if(p.second==maxivalue){
                ans.push_back(p.first);
             }
        }
        return ans;
    }
};
