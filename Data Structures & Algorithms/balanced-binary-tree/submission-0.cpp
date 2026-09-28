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

    int findheight(TreeNode *node){
        if(node == nullptr) return 0;
        int left = findheight(node->left);
        int right = findheight(node->right);
        if(left == -1 || right == -1 || abs(left-right)>1) return -1;
        return 1+std::max(left,right);
    }

    bool isBalanced(TreeNode* root) {
           return findheight(root)!=-1;
    }
};
