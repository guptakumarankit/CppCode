#include<iostream>
#include<queue>
#include<limits>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){
    cout<<"Enter the value of data: "<<endl;
    int data;
    cin>>data;

    if(data == -1)
      return NULL;
    
    // initially value.....
    Node*newNode = new Node(data);

    cout<<"Enter the data for left child of :"<<data<<endl;
    newNode->left = buildTree();

    cout<<"Enter the data for right child of :"<<data<<endl;
    newNode->right = buildTree();

    return newNode;
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

// 3 5 6 -1 -1 2 7 -1 -1 4 -1 -1 1 9 -1 -1 8 -1 -1
// 5 4 2 -1 -1 1 -1 -1 3 6 -1 -1 7 -1 -1
void dfs(Node* root,vector<int>&path){
    if(root == NULL)return;
    path.push_back(root->data);
    cout<<"path is:"<<endl;
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }cout<<endl;

    cout<<"left me gaya"<<endl;
    dfs(root->left,path);
    cout<<"right me gaya"<<endl;
    dfs(root->right,path);
    cout<<"pop me gaya: "<<root->data<<endl;
    path.pop_back();
}

int main(){
    Node* root = NULL;
    root = buildTree();
    levelordertraversal(root);
    cout<<"Dfs is:"<<endl;
    vector<int>path;
    dfs(root,path);
}

