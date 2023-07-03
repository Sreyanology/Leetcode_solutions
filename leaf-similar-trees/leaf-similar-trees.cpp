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
    vector<int>leaf;
    void leafNodes(TreeNode* &root)
    {
        if(root->left == NULL && root->right==NULL)
         leaf.push_back(root->val);
        if(root->left!=NULL)
        leafNodes(root->left);
        if(root->right!=NULL)
        leafNodes(root->right);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leafNodes(root1);
        vector<int>leaf1 = leaf;
        leaf.clear();
        leafNodes(root2);
        vector<int>leaf2 = leaf;
        leaf.clear();
        if (leaf2.size() != leaf1.size())
        {
            return false;
        }
        else
        {
            for(int i=0; i<leaf1.size(); i++)
            {
                if(leaf1[i]!= leaf2[i])
                 return false;
            }
        }
        return true;
    }

};