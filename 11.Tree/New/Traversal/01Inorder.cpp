#include <iostream>
#include <vector>
using namespace std;

// T.C -> O(N).
// S.C -> O(N).

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), 
    left(nullptr), 
    right(nullptr) {}
};

void inorder(Node* root, vector<int> &arr){

    if(root == nullptr){
        return;
    }

    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}


vector<int> inOrder(Node* root){
    vector<int> arr;
    inorder(root, arr);
    return arr;
}


int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> result = inOrder(root);  
    cout << "Inorder Traversal: ";

    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

// UsingStack 
// T.C -> O(N).
// S.C -> O(N).

class Solution {
    public:     
    vector<int> inorderTraversalUsingStack(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* node = root;
        vector<int>inorder;
        while(true){
            if(node != NULL){
                st.push(node);
                node = node->left;
            }
            else{
                if(st.empty() == true)
                    break;
                node = st.top();
                st.pop();
                inorder.push_back(node->val);
                node = node->right;
            }
        }
        return inorder;
    }
};


// Using Morris Traversal
// Time Complexity -> O(n).
// Space complexity -> O(1).


class Solution {
    public:
    vector<int>inorder;
    void morrisTraversal(TreeNode* root){

        if(root == NULL) return;

        TreeNode* curr = root;

        while(curr != NULL){
            if(curr->left == NULL){
                inorder.push_back(curr->val);
                curr = curr->right;
            }
            else{
                // find inorderpredecessor
                TreeNode* pred = curr->left;
                while(pred->right != NULL && pred->right != curr){
                    pred = pred->right;
                }

                // link create
                if(pred->right == NULL){
                    pred->right = curr;
                    curr = curr->left;
                }
                else{ // remove link
                    pred->right = NULL;
                    inorder.push_back(curr->val);
                    curr = curr->right;
                }
            }
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        morrisTraversal(root);
        return inorder;
    }
};