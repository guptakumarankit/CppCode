#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Brute Force 
// Time Complexity -> O(n^2).
// S.C -> O(N).


class Solution {
    public:
    int height(TreeNode* root){
        if(root == NULL) return 0;
        return max(height(root->left),height(root->right)) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool diff = abs(height(root->left) - height(root->right)) <= 1;

        if(left && right && diff) return true;
        else return false;
    }
};


// T.C -> O(N).
// S.C -> O(N).

class Solution {
    public:
    int height(TreeNode* root,bool &bal){

        if(root == NULL) return 0;

        int left = height(root->left,bal);
        int right = height(root->right,bal);
        if(abs(left-right) > 1){
            bal = false;
        }
        return max(left,right)+1;
    }

    bool isBalanced(TreeNode* root) {

        if(root == NULL) return true;
        bool bal = true;
        height(root,bal);
        return bal;
    }
};