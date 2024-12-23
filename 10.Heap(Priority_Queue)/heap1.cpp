#include<iostream>
using namespace std;

class Heap{
    public:
    int arr[250];
    int size ;
    Heap(){
        size = 0;
    }

    /* 
       T.C -> O(log(n))..
       S.C -> 
     */
    void insertIntoHeap(int val){     
        // we want to insert a value
        size = size+1;
        int index = size;

        // insert value
        arr[index] = val;

        // take val to its right position..
        while(index > 1){
            int parentIndex = index/2;
            if(arr[parentIndex] < arr[index]){
                swap(arr[parentIndex],arr[index]);
                index = parentIndex;
            }
            else{
                break;
            }
        }
    }
    
// delete node from heap......

/* 
    T.C -> O(log(n))
 */
    void deleteFromHeap(){
        
        if(size == 0){
            cout<<"heap is already empty"<<endl;
            return;
        }

        // step 1:
        swap(arr[1],arr[size]);

        // step 2:
        size--;

        // step 3:
        int index = 1;
        while(index <= size){
            int largest = index;
            int left = 2*index;
            int right = 2*index + 1;

            if(left <= size && arr[left] > arr[largest]){
                largest = left; 
            }

            if(right <= size && arr[right] > arr[largest]){
                largest =  right;
            }    

            if(largest != index){
                swap(arr[index] ,arr[largest]);
                index = largest;
            } 
            else{
                // agar largest change nhi huya .iska matlab correct position par aa chuke ho.
                break;
            }  
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

// build heap 
/*
Time Complexity -> O(n).. 
 */

void heapify(int arr[],int n,int i){

    int largest = i;
    int left = 2*i;
    int right = 2*i +1;

        if(left <= n && arr[left] > arr[largest]){
                largest = left;
        }

        if(right <= n && arr[right] > arr[largest]){
            largest =  right;
        }    

        if(largest != i){
            swap(arr[i] ,arr[largest]);
            heapify(arr,n,largest);
        } 
    }

int main(){
     
     int arr[] = { -1,2,6,8,3,7};

     // logic for buildHeap
     int n = 5;
     for(int i=n/2;i>=1;i--){
        heapify(arr,n,i);
     }

     cout<<"printing after building heap"<<endl;
     for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;

/*
    Heap maxheap;
    maxheap.insertIntoHeap(2);
    maxheap.insertIntoHeap(6);
    maxheap.insertIntoHeap(8);
    maxheap.insertIntoHeap(3);
    maxheap.insertIntoHeap(7);

    // print 
    maxheap.print();

    maxheap.deleteFromHeap();
    maxheap.print();

    maxheap.deleteFromHeap();
    maxheap.print();
     
    maxheap.deleteFromHeap();
    maxheap.print();

    maxheap.deleteFromHeap();
    maxheap.print();

    maxheap.deleteFromHeap();
    maxheap.print();

    maxheap.deleteFromHeap();
    maxheap.print(); */
}
