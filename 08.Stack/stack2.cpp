#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Max Rectangle in Binary Matix with all 1's...
// T.C -> O(N X M) , S.C -> O(M)....

const int n = 4;
const int m = 4;

vector<int>nextsmaller(int *arr , int n)
{
    stack<int>s;
    s.push(-1);

   // int n = arr.size();
    vector<int>ans(n);

    for(int i=n-1;i>=0;i--){
        int item = arr[i];

        while(s.top()!= -1 && arr[s.top()] >= item){
            s.pop();
        }

        // push in ans
        if(s.top() == -1){
            ans[i]=n;
        }
        else{
            ans[i] = s.top();
        }
        s.push(i);
    }
    return ans;
}

vector<int>prevsmaller(int *arr, int n)
{
    stack<int>s;
    s.push(-1);

    //int n = arr.size();
    vector<int>ans(n);

    for(int i=0;i<n;i++){
        int item = arr[i];

        while(s.top()!= -1 && arr[s.top()] >= item){
            s.pop();
        }

        // push in ans
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(int *arr , int n){
    vector<int>prev(n);
    prev = prevsmaller(arr,n);
    vector<int>next(n);
    next = nextsmaller(arr,n);

     int maxArea = INT_MIN;
     for(int i=0;i<n;i++)
     {
        int length = arr[i];
        int breadth = next[i] - prev[i] - 1;
        int newArea = length*breadth;
        maxArea = max(maxArea,newArea);
     }
     return maxArea;
}

int MaxArea(int matrix[n][m], int n , int m){   
     int area = largestRectangleArea(matrix[0],m);

     for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){

            // row update: by adding previous row's value
            if(matrix[i][j] != 0)
                  matrix[i][j] = matrix[i][j] + matrix[i-1][j];
            else  
                 matrix[i][j] = 0;
        }
        // entire row is update now
        area = max(area,largestRectangleArea(matrix[i],m));
     }
    return area;
}

/* 
int main(){
      int matrix[n][m] ={
           {1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}
      };
      int ans = MaxArea(matrix,n,m);
      cout<<ans<<endl;     
} */



// Find Next Smaller Element in given Array...

vector<int>Next_SmallerElement(vector<int>arr){

    stack<int>s;
    int n = arr.size();
    vector<int>next_smaller(n);
    next_smaller[n-1] = -1;

    for(int i=n-1;i>=0;i--){
          while(!s.empty()){
            if(arr[i] > s.top()){
                next_smaller[i] = s.top();
                break;
            }
            else{
                s.pop();
                if(s.empty()){
                   next_smaller[i] = -1; 
                }
            }
          }
          s.push(arr[i]);
    }
    return next_smaller;
}

int main(){
    //vector<int>arr = {8,4,6,2,3};
    vector<int>arr{2,1,5,6,2,3};
    //vector<int>arr{1,2,3,4,5,6,7,8};

    cout<<"Before the Array"<<endl;
     for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>next = Next_SmallerElement(arr);
    
    cout<<"Next Smaller Element is:"<<endl;
    for(auto it:next){
        cout<<it<<" ";
    }
    cout<<endl;
}