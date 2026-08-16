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
    int GoodN(TreeNode* root,int max_value){
        if(root == nullptr) return 0;
        int good = 0;
        if(root->val >= max_value) good++;

        max_value = max(max_value,root->val);
        good += GoodN(root->left,max_value);
        good += GoodN(root->right,max_value);
        return good;
    }
    int goodNodes(TreeNode* root) {
        return GoodN(root,root->val);
        
    }
};
