/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:

    void traverse(TreeNode* root, unordered_set<int> &st){
        if(!root){
            return ;
        }
        st.insert(root->val);
        traverse(root->left, st);
        traverse(root->right, st);
    }

    int findSecondMinimumValue(TreeNode* root) {
        unordered_set<int>st;
        traverse(root, st);
        if(st.size() < 2){
            return -1;
        }
        vector<int>vec(st.begin(), st.end());
        sort(vec.begin(), vec.end());
        return vec[1];
    }
};