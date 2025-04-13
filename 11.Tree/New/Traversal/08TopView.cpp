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


class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        
        if(root == NULL)
           return ans;
        
        map<int,int>nodes;
        queue<pair<Node*,int>>q;
        
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            
            pair<Node*,int>temp = q.front();
            q.pop();
            
            Node* frontNode = temp.first;
            int horizontal_line = temp.second;
            
            // if horizontal_line mapping doesn't contain then push.
            if(nodes.find(horizontal_line) == nodes.end())
               nodes[horizontal_line] = frontNode->data;
            
            if(frontNode->left)
                q.push(make_pair(frontNode->left,horizontal_line-1));
            if(frontNode->right)
                q.push(make_pair(frontNode->right,horizontal_line+1));
        }
        
        for(auto it:nodes){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};
