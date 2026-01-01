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

class Solution {
    public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return max(maxDepth(root->left) , maxDepth(root->right)) + 1;
    }
};


int main() {
    // Creating a new node for the root of the 
    // binary tree using dynamic allocation
    TreeNode* root = new TreeNode(1);
    // Creating left and right child
    // nodes for the root node
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    // Creating a right child node for
    // the left child node of the root
    root->left->right = new TreeNode(5);

    Solution obj;
    int height = obj.maxDepth(root);
    cout<<"Height of the Binary tree is:"<<height<<endl;
    return 0;
}
