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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        find(root, arr);
        return arr[k - 1];
    }
    void find(TreeNode *root, vector<int> &arr) {
        if (root == NULL)
            return;
        
        find(root->left, arr);
        arr.push_back(root->val);
        find(root->right, arr);
    }
};
