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

class SolutionBrute {
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

class SolutionOptimal {
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

int main() {
    TreeNode* root = buildTree();

    // Brute Force
    SolutionBrute brute;
    cout << brute.diameterOfBinaryTree(root) << endl;

    // Optimal
    SolutionOptimal optimal;
    cout << optimal.diameterOfBinaryTree(root) << endl;

    return 0;
}

// Input 
//     1
//    / \
//   2   3
//  / \
// 4   5

// output
// 3 
