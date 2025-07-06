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
    void sumNumbers(TreeNode *root, int value,int &sum){
        if(!root) return;
        value=value*10+ root->val;//4
        if(!root->left && !root->right){
            sum+=value;
        }
        sumNumbers(root->left, value,sum);//(9,4,0)
        sumNumbers(root->right,value,sum);
    }
        int sumNumbers(TreeNode* root){
            int sum=0;
            sumNumbers(root,0,sum);
            return sum;
        }
    
};