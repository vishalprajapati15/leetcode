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
    TreeNode* treeFormation(vector<int>& preorder, vector<int>& inorder, int left, int right, int & idx){
        if(left > right){
            return NULL;
        }
        int rootVal = preorder[idx];
        int i = left;
        for(; i <= right; i++){
            if(inorder[i] == rootVal){
                break;
            }
        }
        idx++;
        TreeNode * root = new TreeNode(rootVal);
        root->left = treeFormation(preorder, inorder, left, i-1, idx);
        root->right = treeFormation(preorder, inorder, i+1, right, idx);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        int idx = 0;
        return treeFormation(preorder, inorder, 0, n-1, idx);
    }
};