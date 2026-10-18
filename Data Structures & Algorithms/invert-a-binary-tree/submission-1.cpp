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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* l,*r;
        queue<TreeNode*> q;
        if(root==NULL)return root;
        q.push(root);
        while(!q.empty())
        {
            l=(q.front()!=NULL && q.front()->left!=NULL)?q.front()->left:NULL;
            r=(q.front()!=NULL && q.front()->right)?q.front()->right:NULL;
            if(q.front()!=NULL)
            {
                swap(q.front()->left,q.front()->right);
                q.pop();
                q.push(l);
                q.push(r);
            }
            else
            {
                q.pop();
            }
        }
        return root;
    }
};