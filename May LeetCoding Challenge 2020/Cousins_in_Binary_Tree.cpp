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
    bool isCousins(TreeNode* root, int x, int y) {
        if (getDepth(root, x, 1) == getDepth(root, y, 1) && !isSibling(root, x, y)) {
            return true;
        }
        return false;
    }
    int getDepth(TreeNode* ptr, int val, int depth) {
        if (ptr == NULL) {
            return 0;
        }
        if (ptr->val == val) {
            return depth;
        }
        int downLevel = getDepth(ptr->left, val, depth + 1);
        if (downLevel != 0) {
            return downLevel;
        }
        downLevel = getDepth(ptr->right, val, depth + 1);
        return downLevel;
    }
    bool isSibling(TreeNode* ptr, int x, int y) {
        if (ptr == NULL) {
            return false;
        }
        if (ptr->left && ptr->right) {
            if ((ptr->left->val == x && ptr->right->val == y) 
                || (ptr->left->val == y && ptr->right->val == x)) {
                return true;
            }
        }
        isSibling(ptr->left, x, y);
        isSibling(ptr->right, x, y);
        return false;

    }
};
