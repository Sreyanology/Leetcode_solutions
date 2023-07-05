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
    int goodN(TreeNode* node, int max)
    {
        if(!node) return 0;
        int val = node->val;
        if(val>=max) return 1+goodN(node->left, val)+goodN(node->right, val);
        return goodN(node->left, max)+ goodN(node->right, max);
    }
public:
    int goodNodes(TreeNode* root) {
        int gnodes = goodN(root, root->val);
        return gnodes;
    }
};