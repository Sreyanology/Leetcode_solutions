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
    int minLength(TreeNode* root, int depth)
    {
        queue<pair<TreeNode*, int>>q;
        q.push({root, depth});
        while(!q.empty())
        {
           auto p = q.front();
           TreeNode* node = p.first;
           if(node->left == NULL && node->right == NULL)
            return p.second;
           //depth++;
           if(node->left!= NULL)
            q.push({node->left, p.second+1});
           if(node->right!=NULL)
            q.push({node->right, p.second+1});

           q.pop();
        }
        return depth;
    }
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
         return 0;
        return minLength(root, 1);
    }
};