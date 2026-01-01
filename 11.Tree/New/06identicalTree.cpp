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


// Build tree using level order input
TreeNode* buildTree() {
    int val;
    cout << "Enter the root node: ";
    cin >> val;

    if (val == -1) return NULL;

    TreeNode* root = new TreeNode(val);
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        int leftVal, rightVal;

        cout << "Enter the left child of " << curr->val << " (-1 for no node): ";
        cin >> leftVal;
        if (leftVal != -1) {
            curr->left = new TreeNode(leftVal);
            q.push(curr->left);
        }

        cout << "Enter the right child of " << curr->val << " (-1 for no node): ";
        cin >> rightVal;
        if (rightVal != -1) {
            curr->right = new TreeNode(rightVal);
            q.push(curr->right);
        }
    }
    return root;
}

// T.C -> O(N).
// S.C -> O(N).

class Solution {
    public:   
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(!p && q) return false;
        if(p && !q) return false;
        if(p->val != q->val) return false;

        return isSameTree(p->left,q->left) &&
               isSameTree(p->right,q->right);
    }
};

int main() {
    cout << "Build first tree:" << endl;
    TreeNode* tree1 = buildTree();

    cout << "Build second tree:" << endl;
    TreeNode* tree2 = buildTree();

    Solution sol;
    if(sol.isSameTree(tree1, tree2)) {
        cout << "The trees are the same." << endl;
    } else {
        cout << "The trees are NOT the same." << endl;
    }

    return 0;
}
