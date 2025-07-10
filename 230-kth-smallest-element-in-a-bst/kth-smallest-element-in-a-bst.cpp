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
    void inorder(vector<int>&inorderList, TreeNode* root){
        if(root==nullptr){
            return;
        }
        inorder(inorderList,root->left);
        inorderList.push_back(root->val);
        inorder(inorderList,root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int>inorderList;
        inorder(inorderList,root);
        sort(inorderList.begin(),inorderList.end());
        return inorderList[k-1];
    }
};