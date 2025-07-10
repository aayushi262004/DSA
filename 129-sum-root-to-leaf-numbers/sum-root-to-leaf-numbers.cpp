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
    void findSum(TreeNode* root, int value, int &sum){
        if(root==NULL)return;
        value=value*10+root->val;
        if(!root->left && !root->right) sum+=value;
        if(root->left)findSum(root->left,value,sum);
        if(root->right)findSum(root->right,value,sum);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        findSum(root,0,sum);
        return sum;
    }
};