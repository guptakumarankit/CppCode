#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void solve(Node* root,vector<int>&ans,int level){
    if(root == NULL) return;
    
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}

vector<int> leftView(Node *root)
{
    vector<int>ans;
    if(root == NULL) return ans;
    solve(root,ans,0);
    return ans;
}