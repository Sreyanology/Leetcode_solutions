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
    map<long long, int>m;
    int counts = 0;
    void findPaths(TreeNode* root, int targetSum, long long cursum)
    {
        if(root == NULL)
         return;
        cursum+=root->val;
        counts = counts + m[cursum-targetSum];
        m[cursum]++;
        findPaths(root->left, targetSum, cursum);
        findPaths(root->right, targetSum, cursum);
        m[cursum]--;
        cursum-=root->val;
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        //if(root == NULL)
         //return 0;
        m[0]++;
        findPaths(root, targetSum, 0);
        return counts;
    }
};