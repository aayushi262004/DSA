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
    int preorder(TreeNode* node,int &count){
        if(node==NULL)return 0;
        count++;
        preorder(node->left,count);
        preorder(node->right,count);
        return count;
    }
    int countNodes(TreeNode* root) {
        int count=0;
        preorder(root,count);
        return count;
    }
};