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
// class Solution {
// public:

//     void preorder(TreeNode * root , vector<string> &x)
//     {
//         if(root == NULL)
//         {
//             x.push_back("null");
//             return ;
//         }

//         x.push_back(to_string(root->val));
//         preorder(root->left,x);
//         preorder(root->right,x);

//     }

//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         vector<string> a , b;
//         preorder(p,a);
//         preorder(q,b);

//         if(a == b)
//         {
//             return true;
//         }

//         return false;
//     }
// };

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;        // Both null
        if (!p || !q) return false;       // One is null, one is not
        if (p->val != q->val) return false; // Values do not match

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
