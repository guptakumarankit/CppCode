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


int height(Node* root){
     if(root == NULL)
         return 0;
    
   //  if(root->left == NULL && root->right == NULL)   // NUMBER OF EDGES KE LIYE USED KARTE HAI....
      //   return 0;

     int leftans = height(root->left);
     int rightans = height(root->right);
     return 1+max(leftans,rightans);
}

// Diameter of the binary tree..
int diameter(Node* root){
      if(root == NULL)
           return 0;
     
     int option1 = diameter(root->left);
     int option2 = diameter(root->right);
     int option3 = 1+height(root->left) +height(root->right);

     return max(option1,max(option2,option3));
     }

int diameterofBinarytree(Node* root){
    if(root == NULL)
       return 0;

    return diameter(root) - 1;
}

  // tree balance ot not?  // T.C - O(N^2)...(important) // not a optimal solution.....

bool isBalance(Node* root){

    // jab root hinull hoga to tree already balance hoga..
    if(root == NULL)
      return true;
    //  left part balance hai ki nhi hai 
    bool leftans = isBalance(root->left);
    // right part balance hai ki nhi hai
    bool rightans = isBalance(root->right);
    // difference wala condition hai ki nhi hai.....
    bool diff = abs(height(root->left)-height(root->right)) <= 1;

    if(leftans && rightans && diff)
       return true;
    else 
        return false;
}

// isbalance or not?...  (T.C - (O(N))).....

pair<int,bool>solve(Node* root){

    if(root == NULL)
       return make_pair(0,true);
    
    pair<int,bool>leftans = solve(root->left);
    pair<int,bool>rightans = solve(root->right);

    int leftheight = leftans.first;
    int rightheight = rightans.first;

    bool diff = abs(leftheight - rightheight) <= 1;

    bool leftbalanced = leftans.second;
    bool rightbalanced = rightans.second;

    if(leftbalanced && rightbalanced && diff){
        return make_pair(max(leftheight,rightheight)+1,true);
    }
    else{
        return make_pair(max(leftheight,rightheight)+1,false);
    }

}
bool isBalancetree(Node* root){
     pair<int,bool>ans = solve(root);
     return ans.second;
}


// check Symmertic or not ?

bool solve(Node* a,Node* b){
    if(a == NULL && b == NULL)
        return true;
    
    if(a != NULL && b == NULL)
       return false;
    
    if(a == NULL && b != NULL)
        return false;
    
    if(a->data != b->data)
       return false;

    return solve(a->left , b->right) && solve(a->right,b->left);
}

bool isSymmertic(Node* root){
    if(root == NULL)
        return  true;

    return solve(root->left,root->right);

}


// path sum 

bool hasPathSum(Node* root,int targetSum){
    if(root == NULL)
       return false;
    
    // jab ak hi node ho...
    if(root->data == targetSum && root->left == NULL && root->right == NULL)
       return true;
    
    bool leftans = hasPathSum(root->left , targetSum - root->data);
    bool rightans = hasPathSum(root->right , targetSum - root->data);

    return leftans || rightans;  // yaha isliye or liya gaya hai because agar ak bhi path(means wo left ho ya right)..

}

// Lowest Comman Ancestor(check on leedcode)....// repated questionin interview

Node* lowestCommanAncestor(Node* root,Node* p,Node* q){

    if(root == NULL)
       return NULL;
    
    if(root == p || root == q)
       return root;

    else{
        // left ke liye call jayega..
        Node* leftans = lowestCommanAncestor(root->left,p,q);
        // right wala ke liye call jayega...
        Node* rightans = lowestCommanAncestor(root->right,p,q);

        // condition:->1 agar left part aur right part dono null hai to ans root hi hoga 
        if(leftans != NULL && rightans != NULL)
            return root;

        // condition:->2 agar left part null hoga  to right part me hi ans hoga 
        else if(leftans == NULL)
            return rightans;

        // condition->3 agar right part nullhi to left me ans hoga
        else 
            return leftans;

    }

}

// sum tree or not ?...// repated question... // code khud karo (H/W)...(GFG)

/* approach -> 1
*/

int sum(Node* root){

    // empty
    if(root == NULL)
        return 0;
    
    return sum(root->left)+sum(root->right)+root->data;
}

bool isSumTree(Node* root){

    if(root == NULL || root->left == NULL || root->right == NULL)
          return true;
    
    int leftans = sum(root->left);
    int rightans = sum(root->right);

    // check

    if((root->data == leftans+rightans) && isSumTree(root->left) && isSumTree(root->right) )
         return true;

    return false;
}

/* 
pair<int,bool>solve(Node* root)
{
    // base case
    if(root == NULL)
       return make_pair(0,true);
    
    // base case
    if(root->left == NULL && root->right == NULL)
            return make_pair(root->data,true);
    
    pair<int,bool> left = solve(root->left);
    pair<int,bool> right = solve(root->right);

    if(left.second && right.second && (root->data == left.first+right.first))
         return make_pair(2*root->data,true);
    else  
         return make_pair(root->data+left.first+right.first,false);

}
 */
// path sum 3....(leetcode) // important .. (T.C->(O(N*2)))

int  count=0;
void solve(Node* root , int target,long long int sum)
{
    
    if(root == NULL)
       return;
    
    if(target == sum)
       count++;
    
    if(root->left != NULL)
       solve(root->left , target , sum+root->left->data);
   
    if(root->right != NULL)
       solve(root->right , target , sum +root->right->data);
  
}

int pathSum(Node* root,int targetsum)
{
    if(root == NULL)
      return 0;

    // jis node par khde ho starting node man kar solve karna statr karo..
    solve(root,targetsum,root->data);
  
    // left wala ke liye call jayega 
    pathSum(root->left ,targetsum);
    // right wala ke liye call jayega
    pathSum(root->right , targetsum);
       return count;
}


// check identical/ same or not ?

bool isSameTree(Node* p, Node* q) {
        
        if(p == NULL && q == NULL)
            return true;
        
        if(p == NULL && q != NULL)
            return false;
        
        if(p != NULL && q == NULL)
           return false;
        
        bool leftans = isSameTree(p->left,q->left);
        bool rightans = isSameTree(p->right , q->right);

        bool ans = p->data == q->data;

        if(leftans && rightans && ans)
            return true;
        else 
             return false;
}


// find inorder predessor...// ye leaf node par kam nhi karega


Node* getpredessor(Node* curr)
{
    // jab oot hi null ho
    if(curr == NULL)
       return NULL;
    
    // ak baar left me jaw..
    Node* temp = curr->left;
    // agar left wala hi null ho to..
    if(curr->left == NULL)
       return NULL;
    // left jane ke baad 
    // tab tak right me jaw jab tak null na mile..
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node* getsuccessor(Node* curr)
{
    if(curr == NULL)
       return NULL;

    Node* temp = curr->right;
    if(curr->right == NULL)
        return NULL;
    
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}


// Morris Traversal...(print inorder)

/*// Morris Traversal means 
(1) predeccsor find karo
(2) link create karo
(3) After some work link delete karo do...*/

// need space complexity O(1).. karne ke liye.
// time comp. same rahega inorder ke tarh..O(n)..

void MorrisTraversal(Node* root){

// jab root null ho..
    if(root == NULL)
       return;

    Node* curr = root;
    // jab tak root null na ho 
    while(curr != NULL)
    {// agar curr ka left null ho to return curr ka data aur right part me chle jaw..
        if(curr->left == NULL){
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else{
            // find predeccsor
            Node* pred = curr->left;
            while(pred->right != NULL && pred->right != curr){
                pred=pred->right;
            }
    
            // link create 
            if(pred->right == NULL)
            {
                pred->right = curr;
                curr = curr->left;
            }
            //link remove
            else{
                pred->right = NULL;
                cout<<curr->data<<" ";
                curr=curr->right;
            }
        }
    }
}

// Flatten a binary tree to linked list..
/*
    using Morris traversal..
    T.C -> O(N).
    S.C -> O(1).
*/

Node* Flatten(Node* root)
{
    Node* curr = root;
    while(curr != NULL)
    {
        if(curr->left != NULL){
            // find pred...
            Node* pred = curr->left;
            while(pred->right != NULL)
            {
                pred = pred->right;
            }
            // pred ke right me root ke right se link kar denge..Aur left wala ko null point kar denge..
            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
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

   // cout<<" sum or not ?"<<isSumTree(root)<<endl;

  /*  cout<<"Height of the tree is:"<<height(root)<<endl;

    cout<<"Diameter of the binary tree is:"<<diameterofBinarytree(root)<<endl;

  //  cout<<"Balance or not?"<< isBalance(root)<<endl;
     cout<<"balanced or not ? "<<isBalancetree(root)<<endl;
   
    int targetSum = 22;
    cout<<"path find or not ?"<<hasPathSum(root,targetSum)<<endl;
    
     int targetsum = 8;
    cout<<"path sum is:"<<pathSum(root,targetsum);

    cout<<"inorderpredessor is:"<<endl;
    Node* temp = getpredessor(root);
    cout<<temp->data;

    cout<<"inordersuccessor is:"<<endl;
    Node* flag = getsuccessor(root);
    cout<<flag->data;*/

  //  cout<<"through Morris traversal"<<endl;
  // MorrisTraversal(root);
    
}
