#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

// Merge k array in sorted order...
/* 
    Time Complexity -> O(n*klog(k)).
    space complexity -> O(n*k).
*/
class Info{
    public:
    int data;
    int row;
    int col;

    Info(int data,int row,int col){
        this->data = data;
        this->row = row;
        this->col = col;
    }
};

class Cmp{
    public:
    bool operator()(Info* a, Info* b){
        return a->data > b->data;
    }
};

vector<int>mergeKSortedArrays(vector<vector<int>>arr,int k){
   
    int n = arr[0].size();

    priority_queue<Info*,vector<Info*>,Cmp>minheap;
    vector<int>ans;

    // step 1: put the first element for all rows into the heap...
    for(int i=0;i<k;i++){
        int element = arr[i][0];
        Info* temp = new Info(element,i,0);
        minheap.push(temp);
    }

    while(minheap.size() > 0){

        // fetch top element 
        Info* temp = minheap.top();
        minheap.pop();

        // ans push
        ans.push_back(temp->data);

        // check if next element exist,if yes then push in heap
        if(temp->col+1 < n){
            Info* toPush = new Info(arr[temp->row][temp->col+1],temp->row,temp->col+1);
            minheap.push(toPush);
        }
    }
      return ans;
}

/* 
int main(){

    vector<vector<int>>arr(3 , vector<int>(4,0));

    arr[0][0] = 1;
    arr[0][1] = 3;
    arr[0][2] = 5;
    arr[0][3] = 7;

    arr[1][0] = 2;
    arr[1][1] = 4;
    arr[1][2] = 6;
    arr[1][3] = 8;

    arr[2][0] = 0;
    arr[2][1] = 9;
    arr[2][2] = 10;
    arr[2][3] = 11;

    vector<int>ans = mergeKSortedArrays(arr,3);

    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
 */

// smallest Range in K-list..

int solve(vector<vector<int> > arr,int k ,int n){

    int mini = INT_MAX;
    int maxi = INT_MIN;

    priority_queue<Info*,vector<Info*>,Cmp>minHeap;

    // process first k elements
    for(int i=0;i<k;i++){
        int element = arr[i][0];
        mini = min(mini,element);
        maxi = max(maxi , element);
        minHeap.push(new Info(element , i ,0));
    }

    int start = mini;
    int end = maxi;

    while(!minHeap.empty()){

        // extract top element or minimum element and pop from heap
        Info* temp = minHeap.top();
        minHeap.pop();

        // save data in mini
        mini = temp->data;

        // answer update.
        if(end - start > maxi-mini){
            end = maxi;
            start = mini;
        }

        // push next element..and update max
        if(temp->col+1 < n){
            Info* toPush = new Info(arr[temp->row][temp->col+1],temp->row,temp->col+1);
            minHeap.push(toPush);
            maxi = max(maxi,toPush->data);
        }
        else{
            break;
        }
    }
    cout<<"start "<<start<<" end "<<end<<endl;
    return end-start;
}

/* int main(){

    vector<vector<int>>arr(3 , vector<int>(4,0));

    arr[0][0] = 4;
    arr[0][1] = 10;
    arr[0][2] = 15;
    arr[0][3] = 24;
   // arr[0][4] = 26;
    
    arr[1][0] = 0;
    arr[1][1] = 9;
    arr[1][2] = 12;
    arr[1][3] = 20;

    arr[1][0] = 5;
    arr[1][1] = 18;
    arr[1][2] = 22;
    arr[1][3] = 30;


    cout<<"smallest range is:"<<solve(arr,3,4)<<endl;
    return 0;
} */
