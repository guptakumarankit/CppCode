#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


// Brute Force

class Solution {
    public:
    bool FindPath(TreeNode* root,TreeNode *a,vector<TreeNode*> &path)
    {
        if(root == NULL) return false;
        path.push_back(root);
        if(root == a) return true;

        bool left = FindPath(root->left,a,path);
        bool right = FindPath(root->right,a,path);
        
        if(left || right){
            return true;
        }

        path.pop_back();
        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        vector<TreeNode*>path1,path2;
        FindPath(root,p,path1);
        FindPath(root,q,path2);

        TreeNode* LCA = NULL;
        int m = path1.size();
        int n = path2.size();

        for(int i=0;i<min(path1.size(),path2.size());i++){
            if(path1[i] == path2[i]) LCA = path1[i];
            else break;
        }
        return LCA;
    }
};


// Optimal Approach 

class Solution {
    public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL) return NULL;
        if(root == p || root == q) return root;
    
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        
        if(left == NULL) return right;
        else if(right == NULL) return left;
        else return root;
    }
};
