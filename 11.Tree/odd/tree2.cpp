#include<iostream>
#include<vector>
#include<queue>
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

// construct tree inorder to preorder  
// most ask in adobe..

int position(vector<int>in , int key ,int s, int e)
{
    for(int i=s;i<=e;i++)
    {
        if(in[i] == key)
           return i;
    }
    return -1;
}
Node* buildFromInorderPreorder(vector<int>in,vector<int>preorder,int &preorderIndex ,int inStart,int inEnd){

    // base case 
    // agar preorder ka index jo hai v preorder ke index se bahar chala jaye to -> return null
   // agar starting index ending index se baad ho jaye to -> return null

    if(preorderIndex >= preorder.size() || inStart > inEnd)
       return NULL;
    
    // preorder ke jis element par kade hai usko new node create karke tree me dala diya..
    int element = preorder[preorderIndex++];
    Node* root = new Node(element);

    // search element in inorder array..

    int pos = position(in,element,inStart,inEnd);
    root->left = buildFromInorderPreorder(in,preorder,preorderIndex,inStart,pos -1);
    // cout<<"After root left"<<root->data<<endl;
    root->right = buildFromInorderPreorder(in,preorder,preorderIndex,pos+1,inEnd);
    // cout<<"After root right"<<root->data<<endl;
    return root;
}

// for printing level order traversal..


void levelordertraversal(Node* root){

   queue<Node*>q;
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



int main()
{
    vector<int>inorder={9,3,15,20,7};
    vector<int>preorder = {3,9,20,15,7};
    int index =0;
    Node* root = buildFromInorderPreorder(inorder,preorder,index,0,4);
    
    levelordertraversal(root);
}


// construct tree inorder to postorder  
// most ask in adobe..

int Position(vector<int>in , int key ,int s, int e)
{
    for(int i=s;i<=e;i++)
    {
        if(in[i] == key)
           return i;
    }
    return -1;
}
Node* buildFromInorderPostorder(vector<int>in,vector<int>postorder,int &postorderIndex ,int inStart,int inEnd){

    // base case 

    if(postorderIndex < 0 || inStart > inEnd)
       return NULL;
    
    // preorder ke jis element par kade hai usko new node create karke tree me dala diya..
    int element = postorder[postorderIndex--];
    Node* root = new Node(element);

    // search element in inorder array..

    int pos = Position(in,element,inStart,inEnd);
    root->right = buildFromInorderPostorder(in,postorder,postorderIndex,pos+1,inEnd);
    root->left = buildFromInorderPostorder(in,postorder,postorderIndex,inStart,pos-1);
    return root;
}

/* 
int main()
{
    vector<int>inorder={4,8,2,5,1,6,3,7};
    vector<int>postorder = {8,4,5,2,6,7,3,1};
    int index = postorder.size()-1;
    Node* root = buildFromInorderPostorder(inorder,postorder,index,0,7);
    
    levelordertraversal(root);
} */