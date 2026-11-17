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
vector<vector<int>>a;
void f(TreeNode* root,int l){
    if(root==nullptr)return ;
    if(l==a.size())a.push_back({});
    a[l].push_back(root->val);
    f(root->left,l+1);
    f(root->right,l+1);
}
    vector<vector<int>> levelOrder(TreeNode* root) {
        f(root,0);
        return a;
    }
};