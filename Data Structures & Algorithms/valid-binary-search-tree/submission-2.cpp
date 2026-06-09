

class Solution {
public:


    bool trueORfalse(TreeNode* root,TreeNode* min,TreeNode* max) {
        if(root==NULL) {
            return true;
        }
        if(min!=NULL && min->val>=root->val) {
            return false;
        }

        if(max!=NULL && max->val <= root->val) {
            return false;
        }
        return trueORfalse(root->left,min,root) &&
                trueORfalse(root->right,root,max);
    }


    bool isValidBST(TreeNode* root) {
        return trueORfalse(root,NULL,NULL);
    }
};
