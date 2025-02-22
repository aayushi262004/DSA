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
  int get_val(string &traversal,const int &n, int &pos){
        int val=0;
        while(pos<n && traversal[pos]>='0'&&traversal[pos]<='9'){
            val=val*10+traversal[pos]-'0';
            pos++;
        }
        return val;
      }
      int dash_val(string &traversal , const int &n, int &pos){
        int dashval=0;
        while(pos<n && traversal[pos]=='-'){
            dashval++;
            pos++;
        }
        return dashval;
      }  
void buildtree(TreeNode *curr, int expected_dash_len, string &traversal, const int &n, int &pos){
    if(pos==n)return;
    int prev_pos=pos;
    int dashval=dash_val(traversal,n,pos);
    if(dashval<expected_dash_len){
        pos=prev_pos;
        return;
    }
    int node_val=get_val(traversal,n,pos);
    TreeNode*newnode=new TreeNode(node_val);
    if(!curr->left)curr->left=newnode;
    else     curr->right=newnode;

    buildtree(newnode,1+expected_dash_len,traversal,n,pos);
    buildtree(newnode,1+expected_dash_len, traversal,n,pos);

}
public:
    TreeNode* recoverFromPreorder(string traversal) {
    int n=traversal.size();
    int pos=0;
    TreeNode*root=new TreeNode(get_val(traversal,n,pos));
    buildtree(root,1,traversal,n,pos);
    buildtree(root,1,traversal,n,pos);
    return root;
    }
};