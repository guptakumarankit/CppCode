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


// T.C -> O(N).
// S.C -> O(N).

class Solution {
    public:
    vector<int>preorder;
    vector<int> preorderTraversal(TreeNode* root) {
          
        if(root == NULL) 
           return preorder;
        // push 
        preorder.push_back(root->val);
        // Go left part of present root
        preorderTraversal(root->left);
        // Go right part of present root
        preorderTraversal(root->right);
        return preorder;
    }
};


// using stack 
// T.C -> O(N).
// S.C -> O(N).


class Solution {
    public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>result;
        stack<TreeNode*>st;
        TreeNode* curr = root;

        while(true){
            if(curr != NULL){
                result.push_back(curr->val);
                st.push(curr);
                curr = curr -> left;
            }
            else{
                if(st.empty()) break;
                curr = st.top();
                st.pop();
                curr = curr->right;
            }
        }
        return result;
    }
};


// using Morris Traversal
// T.C -> O(N).
// S.C -> O(1).

class Solution {
public:

vector<int>preorder;
void MorrisTraversal(TreeNode* root){

    if(root == NULL) return;
    TreeNode* curr = root;

    while(curr != NULL){

        if(curr->left == NULL){
            preorder.push_back(curr->val);
            curr = curr->right;
        }
        else{
            //find predecessor
            TreeNode* pred = curr->left;
            while(pred->right != NULL && pred->right != curr){
                    pred = pred->right;
            }

            // create link
            if(pred->right == NULL){
                preorder.push_back(curr->val);
                pred->right = curr;
                curr = curr->left;
            }
            else{// remove link
                pred->right = NULL;
                curr = curr->right;
            }
        }
    }
}

vector<int> preorderTraversal(TreeNode* root) {
    MorrisTraversal(root);
    return preorder;
}