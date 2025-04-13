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

// BRUTE FORCE
// Time Complexity -> O(n^2).   because after find left and right diameter then find height. 
// S.C -> O(N).

class Solution {
    public:
    int Height(TreeNode* root){
        if(root == NULL) return 0;
        return max(Height(root->left),Height(root->right)) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        // base case
        if(root == NULL) return 0;
        int op1 = diameterOfBinaryTree(root->left);
        int op2 = diameterOfBinaryTree(root->right);
        int op3 = Height(root->left) + Height(root->right);

        int ans = max({op1,op2,op3});
        return ans;
    }
};


// T.C -> O(N).
// S.C -> O(N).

class Solution {
    public:
    int height(TreeNode* root,int &diameter){
        if(root == NULL){
            return 0;
        }

        int left = height(root->left,diameter);
        int right = height(root->right,diameter);

        diameter = max(diameter,left+right);
        return max(left,right) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) 
            return 0;

        int diameter = 0;
        height(root,diameter);
        return diameter; 
    }
};
    