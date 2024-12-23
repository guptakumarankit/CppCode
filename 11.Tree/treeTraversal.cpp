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

// pre_order travesal........

void preorder(Node* &root){
    // base case
     if(root == NULL)
        return;
    // ROOT
    cout<<root->data<<" ";
    // LEFT
    preorder(root->left);
    // RIGHT
    preorder(root->right);
}

// post order traversal...

void postorder(Node* &root){
    // base case
    if(root == NULL)
       return;
    // LEFT
    postorder(root->left);
    // RIGHT 
    postorder(root->right);
    // ROOT 
    cout<<root->data<<" ";
}

// in-order traversal...
void inorder(Node* &root){
    // base case
    if(root == NULL)
       return;
    // LEFT
    inorder(root->left);
    // ROOT
    cout<<root->data<<" ";
    // RIGHT 
    inorder(root->right);
}

// level order traversal..

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

// zig-zag traversal

vector<int> zigzagTraversal(Node* root){

    vector<int>result;
    if(root == NULL)
       return result;
    
    queue<Node*>q;
    q.push(root);

    bool leftToright = true;

    while(!q.empty()){
        int size = q.size();

        vector<int>ans;
        // level process
        for(int i=0; i<size ;i++){
            Node* frontNode = q.front();
            q.pop();
        
         // normal insert or reverse insert..
            int index = leftToright ? i : size-i-1;
            ans[index] = frontNode->data;

            if(frontNode-> left)
                q.push(frontNode->left);

            if(frontNode->right)
                q.push(frontNode->right);
        } 

        // direction change karna padega....
        leftToright = !leftToright;

        for(auto i:ans){
            result.push_back(i);
        }
    }
     return result;
}

int main()
{
    // input -> 10 5 3 -1 -1 7 6 -1 -1 -1 11 -1 -1 
    Node* root = NULL;
    root = buildTree();

    cout<<"pre-order traversal is:"<<endl;
    preorder(root);

    cout<<"\npost-order traversal is"<<endl;
    postorder(root);

    cout<<"\nin-order traversal is"<<endl;
    inorder(root);

    cout<<"\nlevel-order-traversal is:"<<endl;
    levelordertraversal(root);

    cout<<"\n zigzag traversal is:"<<endl;
    vector<int>v = zigzagTraversal(root);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
