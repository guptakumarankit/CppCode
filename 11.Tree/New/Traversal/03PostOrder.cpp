#include <bits/stdc++.h>
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


// T.C -> O(N).
// S.C -> O(N).

class Solution {
    public:
    void solve(TreeNode* root,vector<int>&postorder){
        if(root == NULL) return;

        solve(root->left,postorder);
        solve(root->right,postorder);
        postorder.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>postorder;
        solve(root,postorder);
        return postorder;
    }
};


// Using two stack 
// T.C -> O(N).
// S.C -> O(N).

class Solution {
    public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        stack<TreeNode*>st1,st2;
        if(root == NULL)
        return postorder;
        
        st1.push(root);
        while(!st1.empty()){
            TreeNode* top = st1.top();
            st1.pop();
            st2.push(top);
            if(top->left != NULL){
                st1.push(top->left);
            }

            if(top->right != NULL){
                st1.push(top->right);
            }
        }

        while(!st2.empty()){
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        return postorder;
    }
};

// using single stack 
// T.C -> O(N).
// S.C -> O(N).

class Solution {
    public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        stack<TreeNode*>st;
        if(root == NULL)
            return postorder;
            
            st.push(root);
            while(!st.empty()){
                TreeNode* top = st.top();
                st.pop();
                postorder.push_back(top->val);
                if(top->left != NULL){
                    st.push(top->left);
                }

                if(top->right != NULL){
                    st.push(top->right);
                }
            }
        reverse(postorder.begin(),postorder.end());
        return postorder;
    }
};