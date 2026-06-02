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
int search(vector<int>& inorder,int val,int left,int right) {
    for(int i=left;i<=right;i++) {
        if(inorder[i]==val) {
            return i;
        }
    }
    return -1;
}
TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int &preindx,int left,int right) {
    if(right<left) {
        return NULL;
    }
    TreeNode* root=new TreeNode(preorder[preindx]);
    int sesxy=search(inorder,preorder[preindx],left,right);
    preindx++;
    root->left=helper(preorder,inorder,preindx,left,sesxy-1);
    root->right=helper(preorder,inorder,preindx,sesxy+1,right);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preindx=0;
        return helper(preorder,inorder,preindx,0,inorder.size()-1);
    }
};
