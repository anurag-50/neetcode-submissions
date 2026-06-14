

class Solution {
public:


    int prev=0;

    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL) {
            return -1;
        }
        if(root->left!=NULL) {
            int left=kthSmallest(root->left,k);
            if(left!=-1) {
                return left;
            }
        }
        prev=prev+1;
        if(prev==k) {
            return root->val;
        }
        if(root->right!=NULL) {
            int right=kthSmallest(root->right,k);
            if(right!=-1) {
                return right;
            }
        }
        return -1;
    }
};
