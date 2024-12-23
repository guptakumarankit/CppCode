#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        left = NULL;
        right = NULL;
    }
};


class  Info{
      public:
      int mini;
      int maxi;
      int size;
      bool isBST;
      Info(){

      }
      Info(int a ,int b,int c, bool d){
        mini = a;
        maxi = b;
        size = c;
        isBST = d;
      }
};

// build Binary tree..

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

// Bulid binary search tree..

Node* buildBST(Node* root,int data){

    if(root == NULL){
        Node* temp = new Node(data);
        return temp;
    }
    
    // agar data root ke data se baad ho to right me jao..
    if(data > root->data){
         root->right = buildBST(root->right,data);
    }
    else{// agar data root ke data se chuta hai to left me jao..
        root->left = buildBST(root->left,data);
    }
    return root;
}

void createBST(Node* &root){

    cout<<"Enter the value for root node"<<endl;
    int data;
    cin>>data;

    while(data !=-1){
        root = buildBST(root,data);
        cout<<"Enter the data for node"<<endl;
        cin>>data;
    }
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

int main(){
    Node* root = NULL;
    createBST(root);
    // print
    levelordertraversal(root);
    
    cout<<"printing inorder"<<endl;
    inorder(root);

    cout<<"printing preorder"<<endl;
    preorder(root);

    cout<<"printing postorder"<<endl;
    postorder(root);
} 


// always inorder is in sorted order...

/*  best case -> o(logn)  (only in balanced bst)
  average case ->o(h).. 
 worst case -> o(n)  skewed tree  in searching */

bool search(Node*root, int target){

    if( root == NULL)
        return false;
    
    if(root->data == target)
         return true;
    
    if(root->data < target){
       bool rightans = search(root->right,target);
       if(rightans == true)
          return true;
    }
    else{
       bool leftans = search(root->left,target);
       if(leftans == true)
          return true;
    }
    return false;
}


 /* best case -> o(logn)  // balanced BST
  worst case -> o(n)  skewed tree  in searching */
/* 
  int main(){
    Node* root = NULL;
    createBST(root);
    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;
    cout<<"found or not: "<<search(root,target)<<endl;
    return 0;
} 
 */



/* 
time complexity   
    average case -> o(h)..  
    worst case-> o(n)....
                  */

Node* maxvalue(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp=temp->right;
    }
    return temp;
}

Node* minvalue(Node* root){
    Node* temp = root;
    while(temp->left != NULL)
    {
        temp=temp->left;
    }
    return temp;
}

// int main(){

//      Node* root = NULL;
//     createBST(root);

//       // print
//     levelordertraversal(root);
//     cout<<endl;
//     Node* temp = maxvalue(root);
//     Node* flag = minvalue(root);
//     cout<<"maximum value in tree is:"<<temp->data<<endl;
//     cout<<"minimum value in tree is:"<<flag->data<<endl;
// }

Node* deleteNode(Node* root,int target){

    if(root == NULL)
       return NULL;
    
    if(root->data == target)
    {
        // 0 child
        if(root->left == NULL && root->right == NULL){
        delete root;
        return NULL;
        }

        // 1 child 
        // left child...
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // right child...
        if(root->right == NULL && root->left != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child wala 
        if(root->left != NULL && root->right != NULL){
            // get Inorder prede.
            int pred = maxvalue(root->left)->data;
            // copy
            root->data = pred;
            // solve bachi hui problem..
            root->left = deleteNode(root->left,pred);
            return root;
        }
    }
    else if( target > root->data){
        root->right = deleteNode(root->right, target);
    }
    else{
        root->left = deleteNode(root->left,target);
    }
    return root;   
}

// delete node 
/* 
    int main(){
    Node* root = NULL;
    createBST(root);
    levelordertraversal(root);
    cout<<endl;

    int target;
    cout<<"Enter the delete node"<<endl;
    cin>>target;

    root = deleteNode(root,target);

    cout<<"printing thre tree again"<<endl;
    levelordertraversal(root);
    cout<<endl;
    
    return 0;
} 
 */


/*    check given tree is BST or not ..
      T.C-> O(N).
      S.C -> O(N). */

bool checkBST(Node* root,int min,int max){

    // base case
    if(root == NULL)
        return true;
    
    if(root->data > min && root->data < max){
        bool left = checkBST(root->left,min,root->data);
        bool right = checkBST(root->right,root->data,max);
        return left && right;
    }
    return false;
}

/* 
int main(){
    Node* root = NULL;
    createBST(root);

      // print
    levelordertraversal(root);
    int min = INT_MIN;
    int max = INT_MAX;
    if(checkBST(root,min,max))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
} */


// lowest comman ancestor..in BST   // check on any website..

Node* lcaBST(Node* root , Node* p , Node* q){

    // base case
    if(root ==  NULL)
       return NULL;

    if(root->data < p->data && root->data < q->data){
        // nodes are in right subtree.
        return lcaBST(root->right,p,q);
    }

    if(root->data > p->data && root->data > q->data){
        // nodes are in left subtree
        return lcaBST(root->left,p,q);
    }
    
    else{
        // one node in left subtree and another in right subtree..
        return root;
    }
    
}

Info solve(Node* root , int & ans){
    
    // base case
    if(root == NULL)
       return{INT_MAX,INT_MIN,0,true};

    // solve for left
    Info leftans = solve(root->left , ans);
    // solve for right
    Info rightans = solve(root->right , ans);
 
    // create ans for current node/subtree
    Info curr;
    curr.size = leftans.size + rightans.size + 1;
    curr.mini = min(leftans.mini , root->data);
    curr.maxi = max(rightans.maxi , root->data);

    if(leftans.isBST && rightans.isBST && (root->data > leftans.maxi && root->data  < rightans.mini)){
        curr.isBST = true;
    }
    else{
        curr.isBST = false;
    }

    // if curr subtree is bst, then update ans

    if(curr.isBST)
        ans = max(ans ,curr.size);
    // return all values of current subtree to upper levelis
    return curr;
}

int largestBST(Node* root){

    int ans =0;
    solve(root , ans);
    return ans;
}

/* 
int main(){

    Node* root = NULL;
    root = buildTree();

    // print
    levelordertraversal(root);

    cout<<"size of largest is in given binary tree is: "<<largestBST(root)<<endl;

}
 */

 // Print all leaf nodes of a Binary Tree from left to right

 
