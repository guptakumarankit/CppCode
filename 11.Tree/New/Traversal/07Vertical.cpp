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
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int>vertical;
        
        if(root == NULL)
            return vertical;
        // we store in map horizontal_line-> then level->vector(data of root) 
        map<int,map<int,vector<int>>>nodes;
        // queue have a pair in contain root and another pair which contains horizontal_line and level
        queue<pair<Node*,pair<int,int>>>q;
        
        // push root
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty()){
            
            pair<Node*,pair<int,int>> temp = q.front();
            q.pop();
            
            Node* frontNode = temp.first;
            int horizontal_line = temp.second.first;
            int level = temp.second.second;
            
            nodes[horizontal_line][level].push_back(frontNode->data);
            
            if(frontNode->left)
                q.push(make_pair(frontNode->left,make_pair(horizontal_line-1,level+1)));
            if(frontNode->right)
               q.push(make_pair(frontNode->right,make_pair(horizontal_line+1,level+1)));
        }
        
        for(auto it:nodes){
            for(auto j:it.second){
                for(auto k:j.second){
                    vertical.push_back(k);
                }
            }
        }
        return vertical;
    }
};
