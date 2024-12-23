/* 
// 

#include<iostream>
using namespace std;
#include<queue>

class Queue{

    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int n)
    {
        arr = new int[n];
        front = 0;
        rear = 0;
        size = n;
        
    }

    void push(int element){
        if(rear == size){
            cout<<"overflow hogya"<<endl;
            return;
        }
        else{
            arr[rear] = element;
            rear++;
        }
    }

    void pop(){
        if(front == rear){
            cout<<"underflow hogayga"<<endl;
            return;
        }
        else{
            arr[front] = -1;
            front++;
            if(front == rear)
            {
                front = rear =0;
            }
        }
    }
    
    bool isEmpty(){
        if(front == rear)
           return true;
        else  
           return false;
    }

    int getSize()
    {
        return rear-front;
    }

    int getFront()
    {
        if(front == rear)
           return -1;
        else
         return arr[front];
    }

};

int main()
{
    Queue* q= new Queue(5);
    q->push(3);
    q->push(5);
    q->push(7);
    q->push(9);

    cout<<"front element is:"<<q->getFront()<<endl;

    q->pop();
    cout<<"front element is:"<<q->getFront()<<endl;

    cout<<"size of queue is:"<<q->getSize()<<endl;

    cout<<"Empty or not "<<q->isEmpty()<<endl;

    cout<<"printing all element inside queue"<<endl;

    while(!q->isEmpty()){
        cout<<q->getFront()<<" ";
        q->pop();
    }
    cout<<endl;

    
}
 */


// reverse of the queue(using stack)
/* 
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(10);

    // step 1: queue -> stack
    stack<int>s;

    while(!q.empty()){
        int element =  q.front();
        q.pop();
        s.push(element);
    }

    //step:2 stack ->queue

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    cout<<"printing the queue"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
 */

// reverse of the queue using recursion......

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int>&q)
{
    // base case
    if(q.empty())
       return;
    
    int element = q.front();
    q.pop();

    reverse(q);
    q.push(element);
}


/* int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(45);

    reverse(q);

    cout<<"After reverse the queue:"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
} */


// 

void solve(vector<int>&v , vector<int>&ans,int k){
    // step: 1 queue bana lo
    queue<int>q;

    // step:2 first window ko travese karna hai
    for(int i=0;i<k;i++)
    { 
          if(v[i] < 0)
             q.push(i);
    }
    // step:3 answer save...
    if(q.size() > 0)
        ans.push_back(v[q.front()]);
    else
        ans.push_back(0);
    
    // step:4 remaining window process
    for(int i=k;i<v.size();i++){
        if(!q.empty() && i-q.front() >= k){
            q.pop();
        }

    // push in queue
    if(v[i] < 0)
      q.push(i);
    
    // ans store
    if(q.empty())
        ans.push_back(0);
    else
        ans.push_back(v[q.front()]);
    }

}
/* 
int main(){

    vector<int>v;
    v.push_back(12);
    v.push_back(-1);
    v.push_back(-7);
    v.push_back(8);
    v.push_back(-15);
    v.push_back(30);
    v.push_back(16);
    v.push_back(28);
    

    int k=3;
    vector<int>ans;

    solve(v,ans,k);

    cout<<"printing answer"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
 */


// reverse first k element in queue......

void reverse_k_element(queue<int>&v,int k){
  
  int size = v.size();
  
  // step 1: pahle stack bana lo
     stack<int>s;

  // step 2: stack me first k element ko dal do

     for(int i=0;i<k;i++)
     {
        s.push(v.front());
        v.pop();
     }
   
   // step:3 stack ke element ko ab queue last me push kar do 

  for(int i=0;i<k;i++){
       v.push(s.top());
       s.pop();
  }

   // step:4  ab (n-k)element ko queue ke last me dal do
   for(int i=0;i<(size - k);i++)
   {
       v.push(v.front());
       v.pop();
   }
}

int main(){

    queue<int>v;
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);
    v.push(5);
    v.push(6);
    v.push(7);
    v.push(8);

    int k=3;

    reverse_k_element(v,k);

    cout<<"After k-reverse queue"<<endl;
    while(!v.empty()){
        cout<<v.front()<<" ";
        v.pop();
    }
    cout<<endl;
}
