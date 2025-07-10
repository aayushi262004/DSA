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
    void inorder(vector<int>& inorderList, TreeNode* root){
        if(root== nullptr){
            return;
        }
        inorder(inorderList,root->left);
        inorderList.push_back(root->val);
        inorder(inorderList,root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>inorderList;
        inorder(inorderList,root);
        int minDiff=INT_MAX;

        for(int i=0;i<inorderList.size()-1;i++){
            int curr_diff=inorderList[i+1]-inorderList[i];
            minDiff=min(minDiff,curr_diff);
        }
        return minDiff;
    }
};