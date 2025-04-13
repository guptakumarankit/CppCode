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
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>ans;
        
        if(root == NULL)
            return ans;
        
        map<int,int>nodes;
        queue<pair<Node*,int>>q;
        
        q.push({root,0});
        
        while(!q.empty()){
            
            pair<Node*,int>temp = q.front();
            q.pop();
            
            Node* frontNode = temp.first;
            int horizontal_line = temp.second;
            
            nodes[horizontal_line] = frontNode->data;
            
            if(frontNode->left)
                q.push({frontNode->left,horizontal_line-1});
            if(frontNode->right)
                q.push({frontNode->right,horizontal_line+1});
        }
        
        for(auto it:nodes){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};