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
     TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.empty()) {
            return nullptr;
        }

        int maxIndex = max_element(nums.begin(), nums.end()) - nums.begin();
        TreeNode* root = new TreeNode(nums[maxIndex]);

        vector<int> leftNums(nums.begin(), nums.begin() + maxIndex);
        root->left = constructMaximumBinaryTree(leftNums);

        vector<int> rightNums(nums.begin() + maxIndex + 1, nums.end());
        root->right = constructMaximumBinaryTree(rightNums);

        return root;
    }
};