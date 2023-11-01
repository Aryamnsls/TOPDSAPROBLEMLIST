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
    vector<int> findMode(TreeNode* root) {
        vector<int> modes;
        int currentVal = 0;
        int currentCount = 0;
        int maxCount = 0;
        inorderTraversal(root, modes, currentVal, currentCount, maxCount);
        return modes;
    }

    void inorderTraversal(TreeNode* node, vector<int>& modes, int& currentVal, int& currentCount, int& maxCount) {
        if (!node) return;

        inorderTraversal(node->left, modes, currentVal, currentCount, maxCount);

        if (currentVal != node->val) {
            currentVal = node->val;
            currentCount = 0;
        }
        currentCount++;

        if (currentCount == maxCount) {
            modes.push_back(currentVal);
        } else if (currentCount > maxCount) {
            modes.clear();
            modes.push_back(currentVal);
            maxCount = currentCount;
        }

        inorderTraversal(node->right, modes, currentVal, currentCount, maxCount);
    }
};
