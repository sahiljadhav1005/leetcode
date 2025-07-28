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
    
    void preorderTraversal(TreeNode * root)
    {
        if(!root)
        {
            return;
        }

        cout<<root->val;
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)
        {
            return NULL;
        }

        if(root->val == val)
        {
            preorderTraversal(root);
            return root;
        }

        TreeNode* resultFromLeft = searchBST(root->left, val);
        
        if (resultFromLeft) 
        {
            return resultFromLeft;
        }

        TreeNode* resultFromRight = searchBST(root->right, val);

        return resultFromRight;
    }
};
