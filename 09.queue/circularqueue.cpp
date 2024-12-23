#include<iostream>
#include<queue>
using namespace std;

class circularQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    circularQueue(int s){
        arr = new int(s);
        front = rear = -1;
        size = s;
    }
    
    void enqueue(int element){
        // overflow
        if((front == 0 && rear == size -1) || (rear == (front-1)%size)){
           cout<<"overflow ho jayega"<<endl;
           return;
        }
        else if(front == -1){
            // first element insertion
            front = rear =0;
        }
        else if(rear == size-1 && front !=0){
             // handle circular insertion case
             rear=0;
        }
        else{
            // normal insertion case-> no corner case
            rear++;
        }
        arr[rear] = element;
    }

    void dequeue(){
        // underflow
        if(front == -1){
            cout<<"underflow ho gaya"<<endl;
            return;
        }
        else if(front == rear){
            // single element
            front = rear =-1;
        }
        else if(front == size-1){
            // circular nature
            front =0;
        }
        else{
            // normal flow
            front++;
        }
    }


    int getFront()
    {
        if(front == -1)
           return -1;
        else
        return arr[front];
    }
   
    bool isEmpty(){
        if(front == -1)
           return true;
        else 
          return false;
    }

};

int main(){

   circularQueue* q = new circularQueue(5);
   q->enqueue(3);
   q->enqueue(5);
   q->enqueue(7);
   q->enqueue(9);
   q->enqueue(11);

   cout<<"Front element:"<<q->getFront()<<endl;
   q->dequeue();

   cout<<"Front element:"<<q->getFront()<<endl;

   q->enqueue(15);

   while(!q->isEmpty()){
    cout<<q->getFront()<<" ";
    q->dequeue();
   }
   cout<<endl;
}
