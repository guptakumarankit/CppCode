// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
    bool check(TreeNode*l,TreeNode*r){

        if(!l && r) return false; // l is null and r is not null.
        if(l && !r) return false; // l is not a null and r is null.
        if(!l && !r) return true; // l and r both are null.
        if(l->val != r->val) return false; // both value are not same.

        return check(l->left,r->right) && check(l->right,r->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(!root || (!root->left && !root->right)) return true;
        return check(root->left,root->right); 
    }
};