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


// Approach - 1
// T.C -> O(N).
// S.C -> O(N).

class Solution {
    public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>level;
        if(root == NULL)
            return level;
            
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>temp;
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            
            if(front == NULL){
                level.push_back(temp);
                temp.clear();
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                temp.push_back(front->val);
                if(front->left != NULL){
                    q.push(front->left);
                }

                if(front->right != NULL){
                    q.push(front->right);
                }
            }
        }
        return level;
    }
};
    

// Approach - 2
// T.C -> O(N).
// S.C -> O(N).

class Solution {
    public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>levelOrderTraversal;

        if(root == NULL)
        return levelOrderTraversal;
        
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int>temp;
            for(int i=0;i<size;i++){
                TreeNode* frontNode = q.front();
                q.pop();

                temp.push_back(frontNode->val);
                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);

            }
            levelOrderTraversal.push_back(temp);
        }
        return levelOrderTraversal;
    }
};
    