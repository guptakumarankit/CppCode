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



vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   if(root == NULL)
      return ans;
    
   queue<Node*>q;
   q.push(root);
   
   while(!q.empty()){
       Node* frontNode = q.front();
       q.pop();
       
       while(frontNode){
           if(frontNode->left) q.push(frontNode->left);
           ans.push_back(frontNode->data);
           frontNode = frontNode->right;
       }
   }
   return ans;
}