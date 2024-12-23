#include <iostream>
#include <queue>
using namespace std;

// find kth largest element in an array....
// Time Complexity -> O(nlogn).
// space complexity -> O(n).

int getKthLargestElementusingmaxHeap(int arr[],int n,int k){
      priority_queue<int>pq;

      for(int i=0;i<n;i++){
          pq.push(arr[i]);
      }
      
      for(int i=1;i<k;i++){
          pq.pop();
      }
      return pq.top();
}

/*
    // jab largest phuchega to min heap use karege aur smallest phuchega to max heap use karege
    // because agar minimum phuchne par min heap use karenge to space complexity -> O(n). hoga
  
    // Time Compleixty -> O(nlogk).
    // space complexity -> O(k)

*/
int getKthLargestElement(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minheap;

    // process first k element heap me dal do..
    for (int i = 0; i < k; i++)
    {
        minheap.push(arr[i]);
    }

    // baki bache huye element ak ak karke dalo do..
    for (int i = k; i < n; i++)
    {
        if (arr[i] > minheap.top())
        {
            minheap.pop();
            minheap.push(arr[i]);
        }
    }
    return minheap.top();
}


// Connect n ropes with minimum cost..(GFG Problem)

int getMinCostHeap(int arr[], int n)
{

    int cost = 0;

    // createa min heap
    

    priority_queue<int, vector<int>, greater<int>> minheap;

    // insert all array elements into min heap..
    for (int i = 0; i < n; i++)
    {
        minheap.push(arr[i]);
    }

    while (minheap.size() > 1)
    {
        // fetch 2 min elements and put their sum in cost and put element back in minheap
        int first = minheap.top();
        minheap.pop();

        int second = minheap.top();
        minheap.pop();

        int sum = first + second;

        cost += sum;
        minheap.push(sum);
    }
    return cost;
}


int main(){

    // max heap create stl
    priority_queue<int>p;
    p.push(3);
    p.push(2);
    p.push(1);
    p.push(4);
    p.push(5);
    p.push(6);

    // print top element in heap(ie,root).
    cout<<p.top()<<endl;
    // delete
    p.pop();

    // size
    cout<<p.size()<<endl;

    // create min heap stl..
    priority_queue<int,vector<int>,greater<int>>minheap;
    minheap.push(3);
    minheap.push(2);
    minheap.push(4);
    minheap.push(9);
    minheap.push(1);
    minheap.push(6);

    // print top element in heap(ie, root)..
    cout<<minheap.top()<<endl;
    // delete element..
    minheap.pop();
    // size of the heap..
    cout<<minheap.size()<<endl;



  int arr[10]={3,2,5,1,6,7,8,9};
  int n = 8;
  int k =3;
  cout<<"kth largest element is:"<<getKthLargestElement(arr,n,k)<<endl;
  cout<<"using max heap"<<getKthLargestElementusingmaxHeap(arr,n,k)<<endl;
  return 0;
}
 
/* 
int main(){

    int arr[4]={4,3,2,6};
    cout<<getMinCostHeap(arr,4);
    return 0;
} */




