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
bool isshibu(TreeNode* q,TreeNode* p) {
if(q==NULL ||p==NULL) {
    return p==q;
}
return q->val==p->val &&isshibu(q->left,p->left)&&isshibu(q->right,p->right);
}
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root==NULL || subroot==NULL) {
            return root==subroot;
        }
        if(root->val==subroot->val && isshibu(root,subroot)) {
            return true;
        }
        return isSubtree(root->right,subroot)||isSubtree(root->left,subroot);
    }
};
