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
    bool isBalanced(TreeNode* root) {
        if(root==NULL) {
            return true;
        }
        if(height(root)==-1) {
            return false;
        }
        return true;
    }
   int height(TreeNode* root) {
        if(root==NULL) {
            return 0;
        }
        int leftHt=height(root->left);
        int rightHt=height(root->right);
        if(leftHt==-1 || rightHt==-1 || abs(rightHt-leftHt)>1) {
            return -1;
        }
        return max(leftHt,rightHt)+1;
    }
};
