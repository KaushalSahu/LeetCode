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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return helper(preorder, 0, preorder.size() - 1);
    }
    TreeNode* helper(vector<int> & preorder, int l, int r) {
        if (l > r)
            return NULL;
        TreeNode* root = new TreeNode(preorder[l]);
        
        if (l == r)
            return root;
        
        int index = l + 1;
        while (index <= r && preorder[index] < preorder[l]) {
            index++;
        }
        
        root->left = helper(preorder, l + 1, index - 1);
        root->right = helper(preorder, index, r);
        
        return root;
    }
};
