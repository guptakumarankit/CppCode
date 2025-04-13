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

/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// right view of tree
class Solution
{
    public:
    void solve(Node* root,vector<int>&ans,int level){
        
        if(root == NULL)
          return;
        
        if(level == ans.size())
            ans.push_back(root->data);
            
        solve(root->right,ans,level+1);  
        solve(root->left,ans,level+1);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans;
       if(root == NULL)
          return ans;
          
       solve(root,ans,0);
       return ans;
    }
};
