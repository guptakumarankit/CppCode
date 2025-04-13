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

int main(){
    Node* root = NULL;
    root = buildTree();
}