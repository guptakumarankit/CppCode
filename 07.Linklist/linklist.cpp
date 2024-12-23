#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

// insert from beganning
void insertAtHead(Node* &head,int d)
{
    // new node create
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

// insert from last node
void insertAtTail(Node* &tail , int d)
{
    // new node create 
    Node* temp= new Node(d);
    tail->next=temp;
    tail = temp;
}

// travese the linklist
void print(Node* &head)
{
    if(head == NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// find the linklist
int GetLength(Node* & head)
{
  Node* temp = head;
  int len = 0;
  while(temp != NULL)
  {
      len++;
      temp=temp->next;
  }
  return len;
}

// insert from given position in ll
void insertAtPosition(Node* &tail,Node* &head,int position,int d)
{

    // insert at start
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    
    if(position == 0 || position > GetLength(head))
    {
        cout<<"doesn't exist position"<<endl;
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp=temp->next;
        cnt++;
    }

    // inserting at last position
    if(temp ->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    
    // creating a node for d

    Node* nodeToInsert =new Node(d);
    nodeToInsert->next = temp ->next;
    temp->next = nodeToInsert;
}

// delete from beg.
void DeleteHead(Node* &head)
{
    if(head == NULL){
        return;
    }
    Node* temp = head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

// delete from tail

void DeleteTail(Node* & head,Node* &tail)
{
    if(head == NULL){
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    tail=temp;
    temp=temp->next;
    tail->next=NULL;
    delete temp;
}

// delete from given position.

void DeleteAtPosition(Node* &head, Node* &tail,int position)
{

    if(head == NULL){
        return;
    }
    if(position == 1){
        DeleteHead(head);
        return;
    }

    if(position == 0 || position > GetLength(head))
    {
        cout<<"doesn't exist position"<<endl;
        return;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt < position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}
// reverse linklist 

Node*reverse(Node* &head){

    if(head == NULL){
        cout<<"Empty"<<endl;
        return head;
    }

    Node*curr = head;
    Node*prev = NULL;
    while(curr!=NULL){
        Node*forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

// REVERSE USING RECURSION.
Node*reverseRec(Node* &curr , Node* prev)
{
    // base case
    if(curr == NULL){
       return prev;
    } 

    Node* forward = curr->next;
    curr->next = prev;

    return reverseRec(forward,curr);
}

// FIND MIDDLE OF THE LINKLIST..

Node* Findmiddle(Node* &head)
{
   // if(head == NULL){
      //  cout<<"middle can't be a find."<<endl;
   // }
    Node* fast = head->next;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL)
    {
        fast =fast->next->next;
        slow=slow->next;
    }
    return slow;
}

// CHECK CIRCULAR LINKLIST OR NOT ?

bool IscircularLL(Node* &head){
    // empty list
    if(head == NULL){
        return true;
    }
    
    Node* temp = head->next;
    while(temp!=head && temp != NULL){
        // move one node ahead
        temp=temp->next;
    }
    if(temp == head)
           return true;
    // its means we traverse the entire list ,return false
    return false;
}


// REVERSE LINKLIST IN K GROUP.

Node* reverseInk(Node* &head , int k){
    // empty list
    if(head == NULL)
    {
        return NULL;
    }

    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count=0;

    // step 1: reverse first k nodes

    while(curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
        count++;

    }

    // next pointer will be pointing at the end head of the reamanining..

    if(next != NULL)
    {
        // step 2: recursion will get ans for remaininfg list.
        Node*rem =reverseInk(next,k);

        // step 3: connection list in step 1 and step 3.
        head->next=rem;
    }
    // step 4:return head of entire node.
    return prev;
}

// PRINT KTH NODE FROM END .

int countKFrontLast(Node* &head,int k){
    // base case 
    if(head == NULL)
    {
        return 0;
    }

    int cnt = countKFrontLast(head->next, k) + 1;

    if(cnt == k)
      cout<<"kth Node from end is:"<<head->data<<endl;
    
    return cnt;
}

Node* printFromEnd(Node* &head,int k)
{
    if(head == NULL)
    {
        return 0;
    }

    Node* slow = head;
    Node* fast = head;

    while(k--)
    {
        fast=fast->next;
    }

    while(fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

// Detect and find start node in the linklist.

Node* detectLoop(Node* &head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast=fast->next->next; 

        if(slow == fast)
           return slow;     
    }
    return NULL;
}


bool detectAndDeleteLoop(Node* &head)
{
    if(head == NULL)
       return false;
    
    // step-1:detect if loop is present or not.
    Node* fast = detectLoop(head);

    // step-2: decect beginning node

    Node* slow = head;

    while(fast != slow)
    {
        slow = slow->next;
        fast = fast->next;
    }

    Node* beginningNode = slow;

    // step-3:remove the loop connection.
    Node* temp = beginningNode;

    while(temp->next != beginningNode)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    return true;
}

// REMOVE DUPLICATE SORTED LINKLIST..

Node* RemoveDuplicateSorted(Node* &head)
{
    Node*temp = head;
    if(head ==NULL)
    {
        return NULL;
    }
    while(temp!= NULL)
    {
        if((temp->next != NULL) && (temp->data == temp->next->data))
        {
            Node*next_next=temp->next->next;
            Node*nodeToDelete=temp->next;
            delete(nodeToDelete);
            temp->next=next_next;
        }
        else
        {
            temp=temp->next;
        }
    }
    return head;
}

// REMOVE DUPLICATE FROM UNSORTED LINKLIST..(tle gfg)..

Node* RemoveDuplicateUnsorted(Node* &head)
{
    Node* temp = head;
    if(temp == NULL)
    {
        return NULL;
    }

    while(temp != NULL)
    {
        Node*curr = temp->next;
        Node*prev = temp;
        while(curr!=NULL)
        {
             if(curr->data == temp->data)
             {
                Node*Deletenode = curr;
                prev->next = curr->next;
                curr=curr->next;
                delete(Deletenode);
             }
             else
             {
                curr=curr->next;
                prev=prev->next;
             }
        }
        temp=temp->next;
        
    }
    return head;
}

// sort 0's , 1's , 2's in linklist...

Node* sortZerOneTwo(Node* &head)
{
    Node*temp=head;
    int ZeroCount=0;
    int OneCount=0;
    int TwoCount=0;

    while(temp != NULL)
    {
        if(temp->data== 0)
           ZeroCount++;
        else if(temp->data == 1)
           OneCount++;
        else if(temp->data == 2)
           TwoCount++;
        temp=temp->next;
    }

    // replace the element..
    temp=head;
    while(temp != NULL)
    {
        if(ZeroCount!=0)
        {
            temp->data = 0;
            ZeroCount--;
        }
        else if(OneCount!=0)
        {
            temp->data=1;
            OneCount--;
        }

        else if(TwoCount!=0)
        {
             temp->data=2;
             TwoCount--;
        } 
        temp=temp->next;
    } 
   return head;
}

// sort 0's , 1's , 2's in linklist...when replacement is not allowed.


Node* InsertAtTail(Node* &tail,Node* &temp)
{
     tail->next = temp;
     tail =temp;
}

Node*sort_Zero_One_Two(Node* &head)
{
      Node* ZeroHead = new Node(-1);
      Node* ZeroTail = ZeroHead;
      Node* OneHead = new Node(-1);
      Node* OneTail = OneHead;
      Node* TwoHead = new Node(-1);
      Node* TwoTail = TwoHead;

      Node* temp = head;

      while(temp != NULL)
      {
          if(temp->data == 0)
          {
              InsertAtTail(ZeroTail,temp);
          }
          else if(temp->data == 1)
          {
              InsertAtTail(OneTail,temp);
          }
          else if(temp->data == 2)
          {
            InsertAtTail(TwoTail,temp);
          }
          temp=temp->next;
      }

    // merge 3 List

    if(OneHead->next != NULL)
    {
        ZeroTail->next = OneHead->next;
    }
    else{
        ZeroTail->next = TwoHead->next;
    }

    OneTail->next = TwoHead->next;
    TwoTail->next = NULL;

    // setup head

    head = ZeroHead->next;

    // delete dummy node
    
    delete(ZeroHead);
    delete(OneHead);
    delete(TwoHead);

   return head;
}

Node* solve(Node* first, Node* second){
    
    if(first->next == NULL){
        first->next == second;
        return first;
    }

    Node* curr1 = first;
    Node* next1 = first->next;
    Node* curr2 = second;
    Node* next2 = second->next;

    while(next1 != NULL && curr2 != NULL)
    {
        if((curr2->data >= curr1->data)&&(curr2->data <= next1->data))
        {
            // Add the node 
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
       

            // update the link of thr node..
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1=next1;
            next1=next1->next;

            if(curr1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
     return first;
}

// merge two linklist 

Node* MergeTwoList(Node *first , Node* second)
{
    if(first == NULL){
        return second;
    }

    if(second == NULL){
        return first;
    }

    if(first->data <= second->data){
        solve(first,second);
    }
    else{
         solve(second,first);
    }
}

// check palindrome or not ? apporach 1.

bool CheckPalindrome(Node* &Dummy1,Node* &Dummy2)
{
    Node* temp1 = Dummy1;
    Node* temp2 = Dummy2;
    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1->data != temp2->data){
            return false;
         
        }
        temp1 = temp1->next;
        temp2=temp2->next;
    }
    return true;
}

Node* palindrome(Node* & head)
{
   Node* slow = head;
   Node* fast = head;
   Node* Dummy1 = new Node(-1);
   Node* Dummy2 = new Node(-1);
   while(fast != NULL && fast->next == NULL)
   {
        slow=slow->next;
        fast=fast->next->next;
   }
   Dummy1 = head;
   Dummy2 = slow->next;
   // reverse 

   Dummy2 = reverse(Dummy2);
   bool flag = CheckPalindrome(Dummy1,Dummy2);
   
   // delete dummy node
   Dummy2 = reverse(Dummy2);
   slow->next = Dummy2;

   delete(Dummy1);
   delete(Dummy2);
   if(flag == true)
       cout<<"Palindrome"<<endl;
   else 
       cout<<"Not palindrome"<<endl;
}

// apporach -> 2

bool CheckPalindrome(Node* head)
{
    if(head->next == NULL){
        return true;
    }
  
  // step -> 1 . find middle
   Node* middle = Findmiddle(head);
   Node* temp = middle->next;
   // step->2 reverse 
   middle->next = reverse(temp);
  // step->3. check the both havles
  Node* head1 = head;
  Node* head2 = middle->next;

  // check
   
   while(head2 != NULL)
   {
      if(head1->data != head2->data){
          return false;
      }
      head1 = head1->next;
      head2 = head2->next;
   }
   temp = middle->next;
   middle->next = reverse(temp);
   return true;

}

/* 
int main()
{
    // object creation
 
    Node*first = new Node(1);
    Node* head = first;
    Node* tail = first;
    
   // insert to head side
     //  insertAtHead(head,1);
   // print(head);

    // insert the element to tail side
    insertAtTail(tail,3);
    insertAtTail(tail,5);
      // Node* temp = tail; 
  //  insertAtTail(tail,2);
//    insertAtTail(tail,0);
   // insertAtTail(tail,0);
 //   insertAtTail(tail,1);
  //  insertAtTail(tail,2);
   // insertAtTail(tail,0);
      //  tail->next = temp;
  // print(head);

    // insert at position
//   insertAtPosition(tail,head,6 ,12);
   // print(head);

// delete at head
   //  DeleteHead(head);

// find the length
     //cout<<"length of the linklist is:"<<GetLength(head)<<endl;
//  print(head);
     
    // delete the last element 
  //   Node* head2=NULL;        // when list is empty.
 //   DeleteTail(head,tail);
    //print(head);

// delete at any position in list
  //  DeleteAtPosition(head,tail,6);
    // print(head);

   // head = reverse(head);
   // head=reverseRec(head,NULL);
   // print(head);

// middle
   // Node* middle=Findmiddle(head);
    //cout<<"Middle element is:"<<middle->data<<endl;

// circular linklist or not ?
   //head->next=head;
  // cout<<"circular or not:"<<IscircularLL(head)<<endl;

// reverse k group in ll.
    int k=3;
    head=reverseInk(head,k);
    print(head);

// print kth node from end position.
    int k=0;
   // countKFrontLast(head,k);  // using recursion 

   Node* temp=printFromEnd(head,k);   // without recursion.
   cout<<"kth element from last node is:"<<temp->data<<endl;

// LOOP present are not.
  // cout<<detectLoop(head)<<endl;

// detect and remove the loop.
   // cout<<detectAndDeleteLoop(head)<<endl;
  //  print(head);

// remove duplicate in sorted order..

    //RemoveDuplicateSorted(head);
   //print(head);

// remove duplicate in unsorted order..

  // RemoveDuplicateUnsorted(head);
  // print(head);

// sort 0's , 1's , 2's in linklist...
   // approch -> 1.

   // sortZerOneTwo(head);
   // print(head);
    
      // approch -> 2.
   // sort_Zero_One_Two(head);
   // print(head);


    return 0;
}
*/


/* int main()
{   
    // create a first linklist..
    Node*first = new Node(1);
    Node* head = first;
    Node* tail = first;

    insertAtTail(tail,2);
    insertAtTail(tail,7);
    insertAtTail(tail,12);
    insertAtTail(tail,1);
    // create a second linklist
    Node*second = new Node(2);
    Node* head1 = second;
    Node* tail1 = second;

    insertAtTail(tail1,4);
    insertAtTail(tail1,5);

   // MergeTwoList(head,head1);
    print(head);

    palindrome(head);
    return 0;
} */


void InsertAtHead(Node* &head,Node* &tail,int val){

    Node* temp = new Node(val);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}


Node* add(Node* first , Node* second)
{
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL || second != NULL || carry != 0){
         
        int val1 = 0;
        if(first != NULL)
            val1 = first->data;
        
        int val2 = 0;
        if(second != NULL)
             val2 = second->data;


        int sum = val1 + val2 + carry;
        int digit = sum % 10;
        // create the node and add the linklist 
        InsertAtHead(ansHead,ansTail,digit);
        carry = sum/10;
        
        if(first != NULL)
            first = first->next;
        if(second != NULL)
            second = second->next;
    }
    return ansHead;
}

/* 
Node* add(Node* first , Node* second)
{
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL && second != NULL){

        int sum = first->data + second->data + carry;
        int digit = sum % 10;
        // create the node and add the linklist 
        InsertAtHead(ansHead,ansTail,digit);
        carry = sum/10;
        
        first = first->next;
        second = second->next;
    }

    while(first !=  NULL)
    {
        int sum = first->data + carry;
        int digit = sum % 10;
        // create the node and add the linklist 
        InsertAtHead(ansHead,ansTail,digit);
        carry = sum/10;
        first = first->next;
    }

    while(second !=  NULL)
    {
        int sum = second->data + carry;
        int digit = sum % 10;
        // create the node and add the linklist 
        InsertAtHead(ansHead,ansTail,digit);
        carry = sum / 10;
        second=second->next;
    }

    while(carry != 0)
    {
        int sum = sum + carry;
        int digit = sum % 10;
        // create the node and add the linklist 

        InsertAtHead(ansHead,ansTail,digit);
        carry = sum / 10;
    }
    return ansHead;
}
 */
Node* AddTwoList(Node* first, Node* second)
{
     // reverse
      first = reverse(first);
      second = reverse(second);

     Node* ans = add(first,second);
     ans = reverse(ans);
     return ans;
}

Node* merge(Node* left , Node* right)
{
    if(left == NULL)
    {
        return right;
    }

    if(right == NULL)
    {
        return left;
    }
    
    // create a Dummy node
    Node* ans = new Node(-1);
    Node* temp = ans;

    while(left != NULL && right != NULL)
    {
        if(left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left=left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while(left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while(right != NULL)
    {
        temp->next = right;
        temp = right;
        right=right->next;
    }
    ans=ans->next;
    return ans;
}

Node* Mergesort(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* mid = Findmiddle(head);

    // divide linklist into two part..

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    // recursive call of both havles.

    left = Mergesort(left);
    right = Mergesort(right);

    // merge both havles 
    Node* result = merge(left,right);
    return result;

}
/* 
int main()
{   
    // create a first linklist..
    Node*first = new Node(1);
    Node* head = first;
    Node* tail = first;

    insertAtTail(tail,5);
    insertAtTail(tail,3);
    insertAtTail(tail,2);
    insertAtTail(tail,4);

    // create a second linklist
    //Node*second = new Node(5);
   // Node* head1 = second;
    //Node* tail1 = second;

   // insertAtTail(tail1,5);
   // insertAtTail(tail1,5);


   // head = AddTwoList(head,head1);
    print(head);

    // merge sort
    head = Mergesort(head);
    cout<<"After sort the linklist"<<endl;
    print(head);

    return 0;
} */


#include<iostream>
using namespace std;
#define abc main

signed abc()
{
    int n=6;
    printf("%d",n);
	//cout<<n<<endl;
	return -5;
}