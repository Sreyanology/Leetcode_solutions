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
    int maxlen = 0;
    void longestZZ(TreeNode* root, char dir, int len)
    {
        if(root == NULL)
         return;
        
        maxlen = max(maxlen, len);

        if(dir == 'L')
        {
            longestZZ(root->right, 'R', len+1);
            longestZZ(root->left, 'L', 1);
        }
        else
        {
            longestZZ(root->left, 'L', len+1);
            longestZZ(root->right, 'R', 1);
        }

        return;
    }
public:
    int longestZigZag(TreeNode* root) {
        longestZZ(root, 'L', 0);
        longestZZ(root, 'R', 0);

        return maxlen;
    }
};