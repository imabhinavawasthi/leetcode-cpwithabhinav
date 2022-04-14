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
    TreeNode* searchBST(TreeNode* root, int value) {
        
        while(root->left!=NULL||root->right!=NULL){
            if(root->val==value)return root;
            if(root->left==NULL){
                if(value<root->val)return NULL;
                else root=root->right;
            }
            else if(root->right==NULL){
                if(value>root->val)return NULL;
                else root=root->left;
            }else{
                if(value<root->val)root=root->left;
                else root=root->right;
            }
        }
        if(root->val==value)return root;
        return NULL;
    }
};