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
    vector<int> v;
    void inorder(TreeNode* root)
    {
        if(root->left!=NULL)inorder(root->left);
        v.push_back(root->val);
        if(root->right!=NULL)inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)
        {
            v.clear();
            return v;
        }
        inorder(root);
        return v;     
    }
};