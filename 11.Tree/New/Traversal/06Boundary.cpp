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

class Solution {
public:
    void Traversal_Left(Node* root,vector<int>&ans){
        
        if((root == NULL) || (root->left == NULL && root->right == NULL))
           return;
           
        ans.push_back(root->data);
        if(root->left)
           Traversal_Left(root->left,ans);
        else
           Traversal_Left(root->right,ans);
    }
    
    void Traversal_Leaf(Node* root,vector<int>&ans){
        
        if(root == NULL)
          return;
        
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }

        Traversal_Leaf(root->left,ans);
        Traversal_Leaf(root->right,ans);
        
    }
    
    void Traversal_Right(Node* root,vector<int>&ans){
        
        if((root == NULL) || (root->left == NULL && root->right == NULL))
           return;
        
        if(root->right)
            Traversal_Right(root->right,ans);
        else
            Traversal_Right(root->left,ans);
        
        ans.push_back(root->data);
        
    }
    
    vector <int> boundary(Node *root)
    {
        // We Traversal the tree into tree parts.
        //Your code here
        vector<int>ans;
        
        if(root == NULL)
           return ans;
        
        ans.push_back(root->data);
        
        //(1) print LeftSubtree Boundary except leaf node
          Traversal_Left(root->left,ans);
        
        //(2) print all leaf node
          
              // left part 
              Traversal_Leaf(root->left,ans);
              // right part 
              Traversal_Leaf(root->right,ans);
        
        //(3) print rightsubtree Boundary except leafnode in reverse order(means when backtrack then print)
          Traversal_Right(root->right,ans);
        
        return ans;
    }
};