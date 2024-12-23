#include<bits/stdc++.h>
using namespace std;

// Convert BST to Min Heap..
/* 
   Given a binary search tree which is also a complete binary tree. 
   The problem is to convert the given BST into a Min Heap with the
   condition that all the values in the left subtree of a node should 
   be less than all the values in the right subtree of the node. 
   This condition is applied to all the nodes, in the resultant converted
   Min Heap. 
*/

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    // constructor..
    Node(int d){
        this->data = d;
        left = NULL;
        right = NULL;
    }
};


Node* BulidBST(Node* root,int data){
     if(root == NULL){
          Node* temp = new Node(data);
          return temp;
     }
     
     if(data > root->data){
         root->right = BulidBST(root->right,data);
     }
     else{
          root->left = BulidBST(root->left,data);
     }
     return root;
}

void createBST(Node* &root){
     cout<<"Enter the value of root Node"<<endl;
     int data;
     cin>>data;

     while(data != -1){
          root = BulidBST(root,data);
          cout<<"Enter the data of the node"<<endl;
          cin>>data;
     }
}


void levelordertraversal(Node* root){

   queue<Node*> q;
   q.push(root);
   // first root ke baad always level change ho jayega...

   q.push(NULL);

   while(!q.empty()){
    // tu nikal

    Node* front = q.front();
    q.pop();
    if(front == NULL){
        cout<<endl; // level change karne ke liye 

        // catch here
        if(!q.empty())//still element are present..
           q.push(NULL);
    }
    else{
        cout<<front->data<<" ";

        // bache chud jaio

        if(front->left != NULL)
        q.push(front->left);
        
        if(front->right != NULL)
        q.push(front->right);
      }
   }
}

void inorderTraversal(Node* root,vector<int>&inorder){
     if(root == NULL) return;
     // left
     inorderTraversal(root->left,inorder);
     // root
     inorder.push_back(root->data);
     // right
     inorderTraversal(root->right,inorder);
}

void convertIntominHeap(Node* root,vector<int>&inorder,int &index){
     if(root == NULL){
          return;
     }

     root->data = inorder[index++];
     // cout<<"index is:"<<index<<endl;
     convertIntominHeap(root->left,inorder,index);
     // cout<<"index is:"<<index<<endl;
     convertIntominHeap(root->right,inorder,index);
}


/* 
int main(){
     Node* root = NULL;
     createBST(root);
     cout<<"Before changing"<<endl;
     levelordertraversal(root);

     vector<int>inorder;
     inorderTraversal(root,inorder);
     // store inorder traversal then value change according to preorder traversal...
     // convert into minHeap..
     int index = 0;
     convertIntominHeap(root,inorder,index);
     cout<<"After changing into Heap"<<endl;
     levelordertraversal(root);
     return 0;
} */


// 2.K-th Largest Sum Contiguous Subarray..

// approach 1..
/*
    Time Complexity -> O(n*2log(n*2))...
    Space Complexity -> O(n)..
*/

// using sorting 

int FindKthLargestSubarraySum(vector<int>&arr,int k){
  
    vector<int>subarraySum;

     for(int i=0;i<arr.size();i++){
          int sum = 0;
          for(int j=i;j<arr.size();j++){
               sum += arr[j];
               subarraySum.push_back(sum);
          }
     }
     
     sort(subarraySum.begin(),subarraySum.end(),greater<int>());
     for(int i=0;i<subarraySum.size();i++){
          cout<<subarraySum[i]<<endl;
     }
     return subarraySum[k-1];
}

// using minHeap
/*
    Time Complexity -> O(n*2log(n*2))...
    Space Complexity -> O(k)..
*/

int FindKthLargestSubarraySumUsingHeap(vector<int>&arr,int k){
     priority_queue<int,vector<int>,greater<int>>minHeap;

     for(int i=0;i<arr.size();i++){
          int sum = 0;
          for(int j=i;j<arr.size();j++){
               sum += arr[j];
               if(minHeap.size() < k){
                    minHeap.push(sum);
               }
               else if(minHeap.top() < sum){
                    minHeap.pop();
                    minHeap.push(sum);
               }
          }
     }
     return minHeap.top();
}

int main(){
     vector<int>arr{10, -10, 20, -40};
     int k = 6;
     // using sorting...
     cout<<"Kth largest sum of the subarray is:"<<FindKthLargestSubarraySum(arr,k)<<endl;
     // using heap...
     cout<<"Kth largest sum of subarray is:"<<FindKthLargestSubarraySumUsingHeap(arr,k)<<endl;
     return 0;
}