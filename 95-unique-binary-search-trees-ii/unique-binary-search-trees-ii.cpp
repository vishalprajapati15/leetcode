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
    vector<TreeNode*> function (int l, int r){
        if(l > r || l < 1){
            vector<TreeNode*> vec;
            vec.push_back(NULL);
            return vec;
        }
        if(l == r){
            vector<TreeNode*>vec;
            TreeNode *temp = new TreeNode;
            temp->val = l;
            temp->left = NULL;
            temp->right = NULL;
            vec.push_back(temp);
            return vec;
        }
        vector<TreeNode*> ans;
        for(int i =l;i <= r;i++){
            vector<TreeNode*> leftTree = function(l, i-1);
            vector<TreeNode*> rightTree = function(i+1, r);
            for(int k =0; k<leftTree.size(); k++){
                for(int j =0; j< rightTree.size(); j++){
                    TreeNode* temp = new TreeNode;
                    temp->val = i;
                    temp->left = leftTree[k];
                    temp->right = rightTree[j];
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return function(1,n);
    }
};