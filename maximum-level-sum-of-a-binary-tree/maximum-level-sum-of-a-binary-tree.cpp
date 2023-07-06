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
    int maxLevelSum(TreeNode* root) {
        int maxlev = 1;
        int levsum = INT_MIN;
        if(root == NULL)
         return 0;
        queue<TreeNode*>q;
        q.push(root);
        int x= 0;
        while(!q.empty())
        {
            int size = q.size();
            int sum = 0;
            x++;
            while(size--)
            {
                TreeNode* node = q.front();
                sum+= node->val;
                if(node->left!=NULL)
                 q.push(node->left);
                if(node->right!=NULL)
                 q.push(node->right);
                q.pop();
            }
            if(levsum< sum)
            {
                maxlev = x;
                levsum = sum;
            }
        }
        return maxlev;
    }
};